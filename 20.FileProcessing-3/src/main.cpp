#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cctype>
#include <cstdlib>

#include "Car.h"

using namespace std;

void inputData( fstream & );
void listCars( fstream & );
void updateRecord( fstream & );
void addCar( fstream & );
void deleteCar( fstream & );
int instructions( void );

int main()
{
   int choice;

   fstream file( "cars.dat", ios::in | ios::out );

   void ( *functionsArray[] )( fstream & ) = { listCars, updateRecord, addCar, deleteCar };

   if ( !file )
   {
	   ofstream file( "cars.dat", ios::out );
	   Car blankItem;
	   for ( int i = 0; i < 100; i++ )
	   file.write( reinterpret_cast< char * >( &blankItem ), sizeof( Car ) );
	   cerr << "Creating File cars.dat"<<endl<<"Restart the program...";
	   return 0;
   }

   while ( ( choice = instructions() ) != 5 )
   {
      ( *functionsArray[ choice - 1 ] )( file );
      file.clear();
   }
}

void inputData( fstream &fRef )
{
   Car temp;

   int partNumber;
   string brand;
   string model;
   string chassisNumber;
   int kilometers;
   double fuelConsumtion;
   double price;

   cout << "Enter the part number (0 - 99, -1 to end input): ";
   cin >> partNumber;

   if(!cin)
   {
	   cerr << "Wrong Input, Exiting Program...";
	   exit(1);
   }

   while ( partNumber != -1 )
   {
	  temp.setPartNumber( partNumber );
      cout << "Enter the car model: ";
      cin.ignore();
      getline( cin, model );
      temp.setModel( model );
      cout << "Enter model: ";
      cin >> model;

      if(!cin)
      {
   	   cerr << "Wrong Input, Exiting Program...";
   	   exit(1);
      }

      temp.setModel( model );
      cout << "Enter price:";
      cin >> price;

      if(!cin)
      {
   	   cerr << "Wrong Input, Exiting Program...";
   	   exit(1);
      }

      temp.setPrice( price );

      fRef.seekp( temp.getPartNumber() * sizeof( Car ) );

      fRef.write( reinterpret_cast< char * >( &temp ), sizeof( Car ) );

      cout << "Enter the part number (0 - 99, -1 to end input): ";
      cin >> partNumber;
   }
}

int instructions()
{
   int choice;

 cout << "\nEnter a choice:\n1  List all cars."
      << "\n2  Update record.\n3  Add car."
      << "\n4  Delete car.\n5  Quit Program.\n";

   do
   {
      cout << "? ";
      cin >> choice;

      if(!cin)
      {
   	   cerr << "Wrong Input, Exiting Program...";
   	   exit(1);
      }

   } while ( choice < 1 || choice > 5 );

   return choice;
}

void listCars( fstream &fRef )
{
   Car temp;

   cout << setw( 7 ) << "Record#" << "    " << left
      << setw( 30 ) << "Car Brand" << left
      << setw( 13 ) << "Model" << left << setw( 10 ) << "Cost" << endl;

   for ( int count = 0; count < 100 && !fRef.eof(); count++ )
   {
      fRef.seekg( count * sizeof( Car ) );
      fRef.read( reinterpret_cast< char * >( &temp ), sizeof( Car ) );

      if ( temp.getPartNumber() >= 0 && temp.getPartNumber() < 100 )
      {
         cout << fixed << showpoint;
         cout << left << setw( 7 ) << temp.getPartNumber() << "    "
            << left << setw( 30 ) << temp.getBrand() << left
            << setw( 13 ) << temp.getModel() << setprecision( 2 )
            << left << setw( 10 ) << temp.getPrice() << '\n';
      }
   }
}

void updateRecord( fstream &fRef )
{
	Car temp;

	int partNumber;
	string brand;
	string model;
	string chassisNumber;
	int kilometers;
	double fuelConsumtion;
	double price;

   cout << "Enter the part number for update: ";
   cin >> partNumber;

   if(!cin)
   {
	   cerr << "Wrong Input, Exiting Program...";
	   exit(1);
   }

   fRef.seekg( partNumber * sizeof( Car ) );

   fRef.read( reinterpret_cast< char * >( &temp ), sizeof( Car ) );

   if ( temp.getPartNumber() != -1 )
   {
      cout << setw( 7 ) << "Record#" << "    " << left
         << setw( 30 ) << "Car brand" << left
         << setw( 13 ) << "Car Model" << setw( 10 ) << "Cost" << endl;

      cout << fixed << showpoint;
      cout << setw( 7 ) << temp.getPartNumber() << "    "
         << left << setw( 30 ) << temp.getBrand()
         << left << setw( 13 ) << temp.getModel()
         << setprecision( 2 ) << setw( 10 ) << temp.getPrice() << '\n'
         << "Enter the car brand: ";

      cin.ignore();
      getline( cin, brand );
      temp.setBrand( brand );

           cout << "Enter car model:";
           cin >> model;

           if(!cin)
           {
        	   cerr << "Wrong Input, Exiting Program...";
        	   exit(1);
           }

           temp.setModel( model );
           cout << "Enter price:";
           cin >> price;

           if(!cin)
           {
        	   cerr << "Wrong Input, Exiting Program...";
        	   exit(1);
           }

           temp.setPrice( price );

      fRef.seekp( temp.getPartNumber() * sizeof( Car ) );
      fRef.write( reinterpret_cast< char * > ( &temp ), sizeof( Car ) );
   }
   else
      cerr << "Cannot update. The record is empty.\n";
}

void addCar( fstream &fRef )
{
   Car temp;

   int partNumber;
   string brand;
   string model;
   string chassisNumber;
   int kilometers;
   double fuelConsumtion;
   double price;

   cout << "Enter the part number for insertion: ";
   cin >> partNumber;

   if(!cin)
   {
	   cerr << "Wrong Input, Exiting Program...";
	   exit(1);
   }

   fRef.seekg( partNumber * sizeof( Car ) );
   fRef.read( reinterpret_cast< char * > ( &temp ), sizeof( Car ) );

   if ( temp.getPartNumber() == -1 )
   {
      temp.setPartNumber( partNumber );
      cout << "Enter the car brand: ";
      cin.ignore();
      getline( cin, brand );
      temp.setBrand( brand );

           cout << "Enter car model:";
           cin >> model;

           if(!cin)
           {
        	   cerr << "Wrong Input, Exiting Program...";
        	   exit(1);
           }

           temp.setModel( model );
           cout << "Enter price:";
           cin >> price;

           if(!cin)
           {
        	   cerr << "Wrong Input, Exiting Program...";
        	   exit(1);
           }

           temp.setPrice( price );

      fRef.seekp( temp.getPartNumber() * sizeof( Car ) );
      fRef.write( reinterpret_cast< char * >( &temp ), sizeof( Car ) );
   }
   else
      cerr << "Cannot insert. The record contains information.\n";
}

void deleteCar( fstream &fRef )
{
   Car blankItem;
   Car temp;
   int partNumber;

   cout << "Enter the part number for delete: ";
   cin >> partNumber;

   if(!cin)
   {
	   cerr << "Wrong Input, Exiting Program...";
	   exit(1);
   }

   fRef.seekg( partNumber * sizeof( Car ) );
   fRef.read( reinterpret_cast< char * >( &temp ), sizeof( Car ) );

   if ( temp.getPartNumber() != -1 )
   {
      fRef.seekp( partNumber * sizeof( Car ) );
      fRef.write( reinterpret_cast< char * >( &blankItem ), sizeof( Car ) );
      cout << "Record deleted.\n";
   }
   else
      cerr << "Cannot delete. The record is empty.\n";
}

