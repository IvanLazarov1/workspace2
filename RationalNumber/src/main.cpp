#include <iostream>
#include "RationalNumber.h"

using namespace std;

int main() {



	int chislitel1;
	int znamenatel1;

	cout << "Enter chislitel1 and znamenatel1 : ";
	cin >> chislitel1 >> znamenatel1;

	int chislitel2;
	int znamenatel2;

	cout << "Enter chislitel2 and znamenatel2 : ";
	cin >> chislitel2 >> znamenatel2;

	RationalNumber a;
	RationalNumber b;
	RationalNumber c;

	a.setChislitel(chislitel1);
	a.setZnamenatel(znamenatel1);

	b.setChislitel(chislitel2);
	b.setZnamenatel(znamenatel2);


	c = a * b;
	cout << c;

	cout << endl;

	cout << ((a == b) ? "==" : "!=");

	return 0;
}
