#include <iostream>
#include "Door.h"

using namespace std;

int main() {

	Door a, b, c;
	cout << "Enter door A" << endl;
	cin >> a;
	cout << "Enter door B" << endl;
	cin >> b;

	c = a + b;

	cout << c;



	return 0;
}
