#ifndef VEHICLE_H_
#define VEHICLE_H_

#include <string>
#include <vector>

using namespace std;

class Vehicle {

public:

	Vehicle(string brand = "", string model = "", string color = "");
	virtual ~Vehicle();

	const string& getBrand() const;
	void setBrand(const string& brand);

	const string& getColor() const;
	void setColor(const string& color);

	const string& getModel() const;
	void setModel(const string& model);

	void printInfo();

private:

	string m_brand;
	string m_model;
	string m_color;

};


#endif /* VEHICLE_H_ */
