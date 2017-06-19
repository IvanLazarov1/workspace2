#include "Operations.h"

using namespace std;

Operations::Operations() {
	//Auto-generated constructor stub

}

Operations::~Operations() {
	//Auto-generated destructor stub
}

void Operations::printInfo() {

	for (size_t i = 0; i < m_cars.size(); i++) {

		m_cars.at(i)->printInfo();

		if (dynamic_cast<LuxuryCar*>(m_cars.at(i))) {
			cout << m_cars.at(i)->getPrice() <<endl;
		}

	}
}

void Operations::addCar(Car& car) {
	m_cars.push_back(&car);
}
