#include "Operations.h"


using namespace std;

Operations::Operations() {
	// Auto-generated constructor stub

}

Operations::~Operations() {
	// Auto-generated destructor stub
}

void Operations::searchClient(Package &pack, string name){

	if (pack.getSender().getFirstName() == name || pack.getRecipient().getFirstName() == name){

		cout << "Package found name : " << name << endl;
		pack.print();

	}else {

		cout << "Name in package not found!" << endl;

	}
}

Operations operation;
