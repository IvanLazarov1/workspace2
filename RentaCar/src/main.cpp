#include <iostream>
#include <vector>
#include "Car.h"
#include "FamilyCar.h"
#include "LuxuryCar.h"
#include "Operations.h"

using namespace std;

int main() {

	Operations operation;

	FamilyCar fc1("Hyundai", "i10", "Hatchback", "Silver", "1234567890", "CB0849KC", 5.0, 50, 400);
	FamilyCar fc2("Opel", "Astra", "Sedan", "Blue", "123456789", "CA0987BM", 9.0, 70, 600);

	LuxuryCar lc1("Ferrari", "488GTB", "Coupe", "Red", "2345467", "CB4849PB", 20.0, 200, 100, 100);
	LuxuryCar lc2("Porsche", "911Carerra", "Coupe", "Black", "5675643", "CA2625KK", 15.0, 100, 300, 50);

	operation.addCar(fc1);
	operation.addCar(fc2);

	operation.addCar(lc1);
	operation.addCar(lc2);

	operation.printInfo();


	return 0;
}
