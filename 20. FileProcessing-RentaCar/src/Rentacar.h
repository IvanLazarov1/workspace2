#ifndef RENTACAR_H
#define RENTACAR_H

#include <string>

using namespace std;

class Rentacar
{
public:
   static const int LENGTH = 30;

   Rentacar( int = -1, string = "", string = "", int = 0, double = 0.0 );

   void setCarNumber( int );
   int getCarNumber() const;

   void setCarBrand( string );
   string getCarBrand() const;

   void setCarModel( string );
   string getCarModel() const;

   void setYear( int );
   int getYear() const;

   void setCost( double );
   double getCost() const;

private:
   int carNumber;
   char CarBrand[ LENGTH ];
   char CarModel[ LENGTH ];
   int year;
   double cost;
};

#endif
