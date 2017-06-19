#ifndef CAR_H_
#define CAR_H_

#include <string>

using namespace std;

class Car {

public:

	Car(string brand = "", string model = "", string type = "", string color = "", string chassisNumber = "",
			string registrationNumber = "", double fuelConsumption = 0.0);

	virtual ~Car();

	string getBrand() const;
	void setBrand(string brand);

	string getChassisNumber() const;
	void setChassisNumber(string chassisNumber);

	string getColor() const;
	void setColor(string color);

	double getFuelConsumption() const;
	void setFuelConsumption(double fuelConsumption);

	string getModel() const;
	void setModel(string model);

	string getRegistrationNumber() const;
	void setRegistrationNumber(string registrationNumber);

	virtual void printInfo() = 0;
	virtual double getPrice() = 0;

	string getType() const;
	void setType(string type);

private:

	string m_brand;
	string m_model;
	string m_type;
	string m_color;
	string m_chassisNumber;
	string m_registrationNumber;
	double m_fuelConsumption;


};


#endif /* CAR_H_ */
