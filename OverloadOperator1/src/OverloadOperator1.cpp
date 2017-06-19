#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <istream>
#include <ostream>
#include "Drob.h"

using namespace std;

int main() {

	Drob dr;
	Drob dr1;
	Drob dr2;
	cin >> dr;
	cin >> dr1;

	dr2 = dr / dr1;

	cout << dr2;



	return 0;
}
