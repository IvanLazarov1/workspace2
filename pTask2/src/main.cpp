#include <iostream>
#include "Maker.h"
#include "Medicaments.h"
#include "Pharmacy.h"

using namespace std;

int main() {

	Pharmacy ph;
	Maker sopharma("Sopharma", 234, "Bulgaria");
	Medicaments medicament1("Aspirin", "Free", 1.0, 200, sopharma);
	Medicaments medicament2("Analgin", "Free", 1.5, 300, sopharma);

	ph.addMedicaments(medicament1);
	ph.addMedicaments(medicament2);

//	ph.searchMedicament("Analgin");
	ph.print();


	return 0;
}
