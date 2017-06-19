#include <iostream>
#include <vector>
#include "Worker.h"
#include "GrassWorker.h"
#include "TreeWorker.h"

using namespace std;

int main() {

	GrassWorker gr1;
	GrassWorker gr2;

	TreeWorker tr1;
	TreeWorker tr2;

	gr1.setFirstName("Ivan");
	gr1.setSecondName("Ivanov");
	gr1.setLastName("Ivanov");
	gr1.setEgn(8603065412);
	gr1.setAddress("Shipka 6");
	gr1.setPhone(359888457812);
	gr1.setGender("Male");
	gr1.setRatePerSquareMeter(3.70);
	gr1.setTreatedArea(4000);
	gr1.calculateSalary();

	cout << "Grass worker 1 salary : " << gr1.getSalary();

	cout << endl;

	gr2.setFirstName("Gergana");
	gr2.setSecondName("Petrova");
	gr2.setLastName("Ivanova");
	gr2.setEgn(8602024796);
	gr2.setAddress("Shipka 2");
	gr2.setPhone(359883895623);
	gr2.setGender("Female");
	gr2.setRatePerSquareMeter(3.70);
	gr2.setTreatedArea(11000);
	gr2.calculateSalary();

	cout << "Grass worker 2 salary : " << gr2.getSalary();

	cout << endl;

	tr1.setFirstName("Liubomir");
	tr1.setSecondName("Ivanov");
	tr1.setLastName("Petrov");
	tr1.setEgn(8603065413);
	tr1.setAddress("Shipka 1");
	tr1.setPhone(359888457813);
	tr1.setGender("Male");
	tr1.setRatePerTree(3.70);
	tr1.setTreatedTrees(149);
	tr1.setRateBonus(0.6);
	tr1.calculateSalary();

	cout << "Tree worker 1 salary : " << tr1.getSalary();

	cout << endl;

	tr2.setFirstName("Lili");
	tr2.setSecondName("Petrova");
	tr2.setLastName("Ivanova");
	tr2.setEgn(8602024793);
	tr2.setAddress("Shipka 4");
	tr2.setPhone(359883895645);
	tr2.setGender("Female");
	tr2.setRatePerTree(3.70);
	tr2.setTreatedTrees(301);
	tr2.setRateBonus(0.3);
	tr2.calculateSalary();

	cout << "Tree worker 2 salary : " << tr2.getSalary();

	vector<Worker*> workers(4);

	workers.at(0) = new GrassWorker();
	workers.at(1) = new GrassWorker();
	workers.at(2) = new TreeWorker();
	workers.at(3) = new TreeWorker();


	return 0;
}
