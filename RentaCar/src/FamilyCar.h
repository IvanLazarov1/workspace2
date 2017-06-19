#ifndef FAMILYCAR_H_
#define FAMILYCAR_H_

#include "Car.h"

using namespace std;

class FamilyCar : public Car {

public:


	FamilyCar(string brand = "", string model = "", string type = "", string color = "",
			string chassisNumber = "", string registrationNumber = "", double fuelConsumption = 0.0,
			int familyTax = 0, int familyDistance = 0);

	virtual ~FamilyCar();

	int getFamilyDistance() const;
	void setFamilyDistance(int familyDistance);

	int getFamilyTax() const;
	void setFamilyTax(int familyTax);

	void printInfo();

	double getPrice();

private:

	int m_familyTax;
	int m_familyDistance;

};



#endif /* FAMILYCAR_H_ */
