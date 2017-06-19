#ifndef PHARMACY_H_
#define PHARMACY_H_

#include <vector>
#include "Medicaments.h"

using namespace std;

class Pharmacy : public Medicaments{

public:

	Pharmacy();
	virtual ~Pharmacy();

	void addMedicaments(Medicaments&);
	void print();
	void searchMedicament(string name);

private:

	vector<Medicaments> m_medicaments;

};

#endif /* PHARMACY_H_ */
