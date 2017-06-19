// Fig. 17.13: main.cpp
// Writing to a random-access file.
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(){

	// ofstream constructor opens file
	   ofstream outClientFile( "clients.dat", ios::out );

	   // exit program if unable to create file
	   if ( !outClientFile ) // overloaded ! operator
	   {
	      cerr << "File could not be opened" << endl;
	      exit( 1 );
	   } // end if

	   cout << "Enter the account, name, and balance." << endl
	      << "Enter end-of-file to end input.\n? ";

	   int account;
	   char name[ 30 ];
	   double balance;

	   // read account, name and balance from cin, then place in file
	   while ( cin >> account >> name >> balance )
	   {
	      outClientFile << account << ' ' << name << ' ' << balance << endl;
	      cout << "? ";
	   } // end while

   return 0;
} // end main
