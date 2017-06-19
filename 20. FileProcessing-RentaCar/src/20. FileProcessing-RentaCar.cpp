#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cctype>
#include <cstdlib>

#include "Rentacar.h"

using namespace std;

void CostCars( fstream &fRef );
void inputData( fstream & );
void listCars( fstream & );
void updateRecord( fstream & );
void insertRecord( fstream & );
void deleteRecord( fstream & );
void exitCar( fstream & );
int instructions( void );

int main()
{
   int choice;

   fstream file( "Rentacar.dat", ios::in | ios::out );

   void ( *functionsArray[] )( fstream & ) = { listCars, updateRecord, insertRecord, deleteRecord, CostCars, exitCar };

   if ( !file )
   {
	   ofstream file( "Rentacar.dat", ios::out );
	   Rentacar blankItem;
	   for ( int i = 0; i < 10; i++ )
	   file.write( reinterpret_cast< char * >( &blankItem ), sizeof( Rentacar ) );
	   cerr << "Creating File Rentacar.dat"<<endl<<"Restart the program...";
	   return 0;
   }

   while ( ( choice = instructions() ) != 7 )
   {
      ( *functionsArray[ choice - 1 ] )( file );
      file.clear();
   }
}

void inputData( fstream &fRef )
{
   Rentacar temp;

   int number;
   string brand;
   string model;
   double cost;
   int year;

   cout << "Enter Car Number (0 - 9, -1 to end input): ";
   cin >> number;

   if(!cin)
   {
	   cerr << "Wrong Input, Exiting Program...";
	   exit(1);
   }

   while ( number != -1 )
   {
	  temp.setCarNumber( number );
      cout << "Enter Car Brand: ";
      cin.ignore();
      cin >> brand;
      temp.setCarBrand( brand );

      cout << "Enter Car Model: ";
       cin.ignore();
       getline( cin, model );
       temp.setCarModel( model );

      cout << "Enter Car Cost per KM:";
      cin >> cost;

      if(!cin)
      {
   	   cerr << "Wrong Input, Exiting Program...";
   	   exit(1);
      }

      temp.setCost( cost );
      cout << "Enter Car Year:";
      cin >> year;

      if(!cin)
      {
   	   cerr << "Wrong Input, Exiting Program...";
   	   exit(1);
      }

      temp.setYear( year );

      fRef.seekp( temp.getCarNumber() * sizeof( Rentacar ) );

      fRef.write( reinterpret_cast< char * >( &temp ), sizeof( Rentacar ) );

      cout << "Enter Car Number (0 - 9, -1 to end input): ";
      cin >> number;
   }
}

int instructions()
{
   int choice;

 cout << "\nEnter a choice:\n1  List all Cars."
      << "\n2  Update Car.\n3  Insert Car."
      << "\n4  Delete Car.\n5  Few Cost.\n6  Quit Program.\n";

   do
   {
      cout << "? ";
      cin >> choice;

      if(!cin)
      {
   	   cerr << "Wrong Input, Exiting Program...";
   	   exit(1);
      }

   } while ( choice < 1 || choice > 7 );

   return choice;
}

void listCars( fstream &fRef )
{
   Rentacar temp;

   cout << setw( 7 ) << "Cars#" << "    " << left
      << setw( 15 ) << "Brand" << left << setw( 15 ) << "Model" << left
      << setw( 13 ) << "Cost per KM" << left << setw( 10 ) << "Year" << endl;

   for ( int count = 0; count < 10 && !fRef.eof(); count++ )
   {
      fRef.seekg( count * sizeof( Rentacar ) );
      fRef.read( reinterpret_cast< char * >( &temp ), sizeof( Rentacar ) );

      if ( temp.getCarNumber() >= 0 && temp.getCarNumber() < 10 )
      {
         cout << fixed << showpoint;
         cout << left << setw( 7 ) << temp.getCarNumber() << "    "
            << left << setw( 15 ) << temp.getCarBrand() << left
            << setw( 15 ) << temp.getCarModel() << left
            << setw( 13 ) << temp.getCost() << setprecision( 2 )
            << left << setw( 10 ) << temp.getYear() << '\n';
      }
   }
}

void updateRecord( fstream &fRef )
{
   Rentacar temp;
   int part;
   string brand;
   string model;
   int year;
   double cost;

   cout << "Enter Car Number for update: ";
   cin >> part;

   if(!cin)
   {
	   cerr << "Wrong Input, Exiting Program...";
	   exit(1);
   }

   fRef.seekg( part * sizeof( Rentacar ) );

   fRef.read( reinterpret_cast< char * >( &temp ), sizeof( Rentacar ) );

   if ( temp.getCarNumber() != -1 )
   {
      cout << setw( 7 ) << "Record#" << "    " << left
         << setw( 15 ) << "Brand" << left
         << setw( 15 ) << "Model" << left
         << setw( 13 ) << "Cost per KM" << setw( 10 ) << "Year" << endl;

      cout << fixed << showpoint;
      cout << setw( 7 ) << temp.getCarNumber() << "    "
         << left << setw( 15 ) << temp.getCarBrand()
         << left << setw( 15 ) << temp.getCarModel()
         << left << setw( 13 ) << temp.getCost()
         << setprecision( 2 ) << setw( 10 ) << temp.getYear() << '\n'
         << "Enter Car Brand: ";

      cin.ignore();
      cin >> brand;
      temp.setCarBrand( brand );

      cout << "Enter Car Model: ";
   cin.ignore();
   getline( cin, model );
   temp.setCarModel( model );

           cout << "Enter Cost per KM:";
           cin >> cost;

           if(!cin)
           {
        	   cerr << "Wrong Input, Exiting Program...";
        	   exit(1);
           }

           temp.setCost( cost );
           cout << "Enter Year:";
           cin >> year;

           if(!cin)
           {
        	   cerr << "Wrong Input, Exiting Program...";
        	   exit(1);
           }

           temp.setYear( year );

      fRef.seekp( temp.getCarNumber() * sizeof( Rentacar ) );
      fRef.write( reinterpret_cast< char * > ( &temp ), sizeof( Rentacar ) );
   }
   else
      cerr << "Cannot update. The record is empty.\n";
}

void insertRecord( fstream &fRef )
{
   Rentacar temp;
   int part;
   string brand;
   string model;
   int year;
   double cost;

   cout << "Enter Car Number for insertion: ";
   cin >> part;

   if(!cin)
   {
	   cerr << "Wrong Input, Exiting Program...";
	   exit(1);
   }

   fRef.seekg( part * sizeof( Rentacar ) );
   fRef.read( reinterpret_cast< char * > ( &temp ), sizeof( Rentacar ) );

   if ( temp.getCarNumber() == -1 )
   {
      temp.setCarNumber( part );
      cout << "Enter Car Brand: ";
      cin.ignore();
      cin >> brand;
      temp.setCarBrand( brand );

      cout << "Enter Car Model: ";
      cin.ignore();
      getline( cin, model );
      temp.setCarModel( model );

           cout << "Enter Car Cost per KM:";
           cin >> cost;

           if(!cin)
           {
        	   cerr << "Wrong Input, Exiting Program...";
        	   exit(1);
           }

           temp.setCost( cost );
           cout << "Enter Year:";
           cin >> year;

           if(!cin)
           {
        	   cerr << "Wrong Input, Exiting Program...";
        	   exit(1);
           }

           temp.setYear( year );

      fRef.seekp( temp.getCarNumber() * sizeof( Rentacar ) );
      fRef.write( reinterpret_cast< char * >( &temp ), sizeof( Rentacar ) );
   }
   else
      cerr << "Cannot insert. The record contains information.\n";
}

void deleteRecord( fstream &fRef )
{
   Rentacar blankItem;
   Rentacar temp;
   int part;

   cout << "Enter Car Number for deletion: ";
   cin >> part;

   if(!cin)
   {
	   cerr << "Wrong Input, Exiting Program...";
	   exit(1);
   }

   fRef.seekg( part * sizeof( Rentacar ) );
   fRef.read( reinterpret_cast< char * >( &temp ), sizeof( Rentacar ) );

   if ( temp.getCarNumber() != -1 )
   {
      fRef.seekp( part * sizeof( Rentacar ) );
      fRef.write( reinterpret_cast< char * >( &blankItem ), sizeof( Rentacar ) );
      cout << "Record deleted.\n";
   }
   else
      cerr << "Cannot delete. The record is empty.\n";
}

void CostCars( fstream &fRef )
{
   Rentacar temp;
   double cost;
   cout << "Enter desired cost for Car:";
   cin >> cost;

   cout << setw( 7 ) << "Cars#" << "    " << left
      << setw( 15 ) << "Brand" << left << setw( 15 ) << "Model" << left
      << setw( 13 ) << "Cost per KM" << left << setw( 10 ) << "Year" << endl;

   for ( int count = 0; count < 10 && !fRef.eof(); count++ )
   {
      fRef.seekg( count * sizeof( Rentacar ) );
      fRef.read( reinterpret_cast< char * >( &temp ), sizeof( Rentacar ) );

      if ( temp.getCarNumber() >= 0 && temp.getCarNumber() < 10 )
      {
    	  if ( cost >= temp.getCost() )
    	  {
    		  cout << "There is a car equal ot below cost:" << cost <<endl;
    		   cout << fixed << showpoint;
    		         cout << left << setw( 7 ) << temp.getCarNumber() << "    "
    		            << left << setw( 15 ) << temp.getCarBrand() << left
    		            << setw( 15 ) << temp.getCarModel() << left
    		            << setw( 13 ) << temp.getCost() << setprecision( 2 )
    		            << left << setw( 10 ) << temp.getYear() << '\n';
    	  }

    	  else
    	  {
    		  cout << "There is no cost for car below or equal to: " << cost <<endl;
    		  break;
    	  }

      }
   }
}


void exitCar( fstream & )
{
	exit(1);
}
