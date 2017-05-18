// Fig. 17.7: main.cpp
// Reading and printing a sequential file.

#include <iostream>
#include <fstream> // file stream
#include <iomanip>
#include <string>
#include <cstdlib>
#include <vector>

using namespace std;

void outputLine( string, int, double ); // prototype

int main()
{
   // ifstream constructor opens the file
   ifstream inClientFile( "books.dat", ios::in );

   // exit program if ifstream could not open file
   if ( !inClientFile )
   {
      cerr << "File could not be opened" << endl;
      exit( 1 );
   } // end if

   string bookName;
   int year;
   double price;
   double sum = 0;
   double sum2 = 0;
   vector<double> prices;

   cout << left << setw( 10 ) << "BookName" << setw( 13 )
      << "Year" << "  Price" << endl << fixed << showpoint;

   // display each record in file
   while ( inClientFile >> bookName >> year >> price ){

	   outputLine( bookName, year, price);
	   sum += price;
	   prices.push_back(price);
   }

   cout << "Sum of books : " << sum <<endl;
   inClientFile.close();

   cout << "Prices in vector" << endl;

   for (size_t i = 0; i < prices.size(); i++){

	   cout << prices.at(i) << endl;
	   sum2 += prices.at(i);
   }
   cout << "Sum of books in vector : " << sum2 <<endl;

   return 0; // ifstream destructor closes the file
} // end main

// display single record from file
void outputLine( string bookName, int year, double price )
{
   cout << left << setw( 10 ) << bookName << setw( 13 ) << year
      << setw( 7 ) << setprecision( 2 ) << right << price << endl;
} // end function outputLine


