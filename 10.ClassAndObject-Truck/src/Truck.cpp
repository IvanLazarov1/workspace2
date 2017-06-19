/*
 * Truck.cpp
 *
 *  Created on: Apr 4, 2017
 *      Author: asdf
 */
#include <iostream>
#include <string>
#include "Truck.h"

using namespace std;



Truck::Truck() : m_brand(""), m_kilometers(0), m_load(0), m_fuelConsumption(0) {



}

Truck::~Truck() {
	// Auto-generated destructor stub
}

	void Truck::setBrand(){
		cout << "Enter brand : ";
 		getline(cin,m_brand);
 	}
	void Truck::setKilometers(){
		cout << "Enter kilometers : ";

		string userKilometers = "";

		getline(cin, userKilometers);

		if (isInputCorrect(userKilometers))
		{
			m_kilometers = atoi(userKilometers.c_str());
		}

	}
	void Truck::setLoad(){
		cout << "Enter load : ";

		string userLoad = "";

		getline(cin, userLoad);

		if (isInputCorrect(userLoad))
		{
			m_load = atoi(userLoad.c_str());
		}


	}
	void Truck::setFuelConsumption(){
		cout << "Enter fuel consumption : ";

		string userFuelConsumption = "";

		getline(cin, userFuelConsumption);

		if (isInputCorrect(userFuelConsumption))
		{
			m_fuelConsumption = atoi(userFuelConsumption.c_str());
		}

	}

	string Truck::getBrand(){
		return m_brand;
	}
	size_t Truck::getKilometers(){
		return m_kilometers;
	}
	size_t Truck::getLoad(){
		return m_load;
	}
	size_t Truck::getFuelConsumption(){
		return m_fuelConsumption;
	}

	void Truck::showMenu(){
		cout << "1. Show Truck Info. \n"
				"2. Set Brand. \n"
				"3. Set Kilometers. \n"
				"4. Set Load. \n"
				"5. Set Fuel Consumption. \n"
				"6. Quit. \n"
				"Enter choice : ";
	}

	void Truck::setChoice(string choice){

		if (choice.size() > 1 || !isdigit(choice[0]))
		{
			cout << "Invalid Input : " << endl;
			return;
		}

		size_t memberChoice = stoi(choice);

		switch(memberChoice)
		{
			case 1: showInfo(); break;
			case 2: setBrand(); break;
			case 3: setKilometers(); break;
			case 4: setLoad(); break;
			case 5: setFuelConsumption(); break;
			case 6: cout << "Quitting program!"; exit(1);
			default: showError(); break;
		}

	}

	void Truck::showInfo(){

		cout << "\nTruck brand is : " << getBrand() << endl;
		cout << "Truck kilometers is : " << getKilometers() << endl;
		cout << "Truck load is : " << getLoad() << endl;
		cout << "Truck fuel consumption is : " << getFuelConsumption() << endl <<endl;

}

void Truck::showError() {
	cout << "Invalid Choice!" << endl;
}

bool Truck::isInputCorrect(string input) {

	for (size_t i = 0; i < input.size(); i++)
		{
			if (!isdigit(input.at(i)))
			{
				showError();
				return false;
			}
		}
	return true;
}
