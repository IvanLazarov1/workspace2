//============================================================================
// Name        : Triangle1.cpp
// Author      : ty
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Triangle.h"
using namespace std;

int main() {

	Triangle a, b, c;
	cout << "Enter numbers in format x-x-x-x for a : ";
	cin >> a;
	cout << "Enter numbers in format x-x-x-x for b : ";
	cin >> b;

	c = a + b;
//	c = a - b;
//	c = a * b;
//	c = a / b;
	cout << "Result is : " << c;

//	if(a == b){
//		cout << "Numbers is equals";
//	}else{
//
//		cout << "Numbers is not equals";
//	}

//	if(a != b){
//		cout << "Numbers is not equals";
//	}else{
//
//		cout << "Numbers is equals";
//	}

//	if(a > b){
//		cout << "Numbers a > b";
//	}else{
//
//		cout << "Numbers a < b";
//	}

//	if(a < b){
//		cout << "Numbers a < b";
//	}else{
//
//		cout << "Numbers a > b";
//	}

	return 0;
}
