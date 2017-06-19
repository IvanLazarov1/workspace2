//============================================================================
// Name        : Exercise111.cpp
// Author      : ty
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>

#include "Shape.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Trapezoid.h"


using namespace std;

int main() {

	Rectangle r1(2, 5, "blue");
	Triangle tr1(4, 8, "red", 2);
	Trapezoid trap1(22, 33, "Yellow", 15);

	vector<Shape*> figures;
	figures.push_back(&r1);
	figures.push_back(&tr1);
	figures.push_back(&trap1);

	for (size_t i = 0; i < figures.size(); i++){
		figures.at(i)->print();
	}

	return 0;
}
