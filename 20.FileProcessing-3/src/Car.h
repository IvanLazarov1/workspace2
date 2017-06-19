#ifndef CAR_H_
#define CAR_H_
#include <string>
using namespace std;


class Car {

public:

	Car(int partNumber = 0, string brand = "", string model = "",
		string chassisNumber = "", int kilometers = 0,
		double fuelConsumtion = 0.0, double price = 0.0);

	virtual ~Car();

	const string& getBrand() const;
	void setBrand(const string& brand);

	const string& getChassisNumber() const;
	void setChassisNumber(const string& chassisNumber);

	double getFuelConsumtion() const;
	void setFuelConsumtion(double fuelConsumtion);

	int getKilometers() const;
	void setKilometers(int kilometers);

	const string& getModel() const;
	void setModel(const string& model);

	int getPartNumber() const;
	void setPartNumber(int partNumber);

	double getPrice() const;
	void setPrice(double price);

private:

	int m_partNumber;
	string m_brand;
	string m_model;
	string m_chassisNumber;
	int m_kilometers;
	double m_fuelConsumtion;
	double m_price;


};


#endif /* CAR_H_ */
