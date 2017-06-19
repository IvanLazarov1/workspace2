//============================================================================
// Name        : Student.cpp
// Author      : ty
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Student1.h"

using namespace std;

int main() {

	Adress adress("Bulgaria ", " Sofia ", " Tsar Boris ", 1000);
	Student1 st1("Ivan", "c++", adress);

	st1.print();

	return 0;
}
