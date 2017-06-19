//============================================================================
// Name        : HomeExerciseFunctions-2.cpp
// Author      : ty
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <cctype>
#include <cmath>

using namespace std;

double calculateCharges( double );

int main() {
//	5. A parking garage charges a $2.00 minimum fee to park for up to three hours.
//	The garage charges an additional $0.50 per hour for each hour or part thereof
//	in excess of three hours. The maximum charge for any given 24-hour period is $10.00.
//	Assume that no car parks for longer than 24 hours at a time. Write a program that calculates
//	and prints the parking charges for each of three customers who parked their cars in this garage yesterday.


	   double hour;
	   double currentCharge;
	   double totalCharges = 0.0;
	   double totalHours = 0.0;
	   int first = 1;
	   cout << fixed;
	   cout << "Enter the hours parked for 3 cars: ";

	   for ( int i = 1; i <= 3; i++ )
	   {
	      cin >> hour;
	      totalHours += hour;

	      if ( first )
	      {
	         cout << setw( 5 ) << "Car" << setw( 15 ) << "Hours"
	            << setw( 15 ) << "Charge\n";
	         first = 0;
	      }

	      currentCharge = calculateCharges( hour );
	      totalCharges += currentCharge;

	      cout << setw( 3 ) << i << setw( 17 ) << setprecision( 1 ) << hour
	         << setw( 14 ) << setprecision( 2 ) << currentCharge << "\n";
	   }

	   cout << setw( 7 ) << "TOTAL" << setw( 13 ) << setprecision( 1 )
	      << totalHours << setw( 14 ) << setprecision( 2 )
	      << totalCharges << endl;
	   return 0;
}

double calculateCharges( double hours ){
   double charge;
   if ( hours < 3.0 )
      charge = 2.0;
   else if ( hours < 24.0 )
      charge = 2.0 + .5 * ceil( hours - 3.0 );
   else
      charge = 10.0;

   return charge;
}
