#include <iostream>
#include <vector>
#include "Address.h"
#include "Package.h"
#include "Operations.h"

using namespace std;

int main() {

	Package pac;

	pac.setId(1);
	pac.setWeight(2.5);
	pac.setCost(250);


	pac.showInfo();

//	Address myAddress;
//	cin >> myAddress;
//
//	cout << myAddress;

//	operation.searchClient(pack1,"Gosho");




	return 0;
}
