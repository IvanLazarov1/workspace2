#ifndef LUXURYCAR_H_
#define LUXURYCAR_H_

#include "Car.h"

using namespace std;

class LuxuryCar : public Car {

public:


	LuxuryCar(string brand = "", string model = "", string type = "", string color = "",
			string chassisNumber = "", string registrationNumber = "",
			double fuelConsumption = 0.0, int luxuryTax = 0, int luxuryDistance = 0, int taxExtras = 0);

	virtual ~LuxuryCar();

	int getLuxuryDistance() const;
	void setLuxuryDistance(int luxuryDistance);

	int getTaxExtras() const;
	void setTaxExtras(int taxExtras);

	int getLuxuryTax() const;
	void setLuxuryTax(int luxuryTax);

	void printInfo();
	double getPrice();

private:

	int m_luxuryTax;
	int m_luxuryDistance;
	int m_taxExtras;

};


#endif /* LUXURYCAR_H_ */
