#include "Pharmacy.h"
#include <iostream>

using namespace std;

Pharmacy::Pharmacy() {


}

Pharmacy::~Pharmacy() {
	//Auto-generated destructor stub
}

void Pharmacy::addMedicaments(Medicaments& medicament) {

	m_medicaments.push_back(medicament);


}

void Pharmacy::print() {

	for (size_t i = 0; i < m_medicaments.size(); i++){

		m_medicaments.at(i).print();

	}

}

void Pharmacy::searchMedicament(string name) {

	for (size_t i = 0; i < m_medicaments.size(); i++){

		if(name == m_medicaments.at(i).getName()){

			m_medicaments.at(i).print();
		}

	}

}
