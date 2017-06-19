#include <string>

#include "Rentacar.h"

using namespace std;

Rentacar::Rentacar( int carNumberValue, string carBrandValue, string carModelValue, int carYear, double carCost ){
   setCarNumber( carNumberValue );
   setCarBrand( carBrandValue );
   setCarModel(carModelValue);
   setYear( carYear );
   setCost( carCost );
}

void Rentacar::setCarNumber( int carNumberValue ){
   carNumber = carNumberValue;
}

int Rentacar::getCarNumber() const{
   return carNumber;
}

void Rentacar::setCarBrand( string CarBrandString ){
   int length = CarBrandString.size();
   length = ( length < LENGTH ? length : LENGTH - 1 );
   CarBrandString.copy( CarBrand, length );

   CarBrand[ length ] = '\0';
}

string Rentacar::getCarBrand() const{
   return CarBrand;
}

void Rentacar::setCarModel( string CarModelString ){
   int length = CarModelString.size();
   length = ( length < LENGTH ? length : LENGTH - 1 );
   CarModelString.copy( CarModel, length );

   CarModel[ length ] = '\0';
}

string Rentacar::getCarModel() const{
   return CarModel;
}

void Rentacar::setYear( int carYear ){
   year = carYear;
}

int Rentacar::getYear() const{
   return year;
}

void Rentacar::setCost( double carCost ){
   cost = carCost;
}

double Rentacar::getCost() const{
   return cost;
}
