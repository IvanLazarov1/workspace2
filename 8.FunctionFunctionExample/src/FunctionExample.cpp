//============================================================================
// Name        : FunctionExample.cpp
// Author      : ty
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

string LastDigit(int);

int main() {

	int number;

	cout << "Enter number : ";
	cin >> number;

	string res = LastDigit(number);

	cout << res;

	return 0;
}

string LastDigit(int number){

	string result;
	int digit = number % 10;

	switch(digit){

		case 0: result = "Zero"; break;
		case 1: result = "One"; break;
		case 2: result = "Two"; break;
		case 3: result = "Three"; break;
		case 4: result = "Four"; break;
		case 5: result = "Five"; break;
		case 6: result = "Six"; break;
		case 7: result = "Seven"; break;
		case 8: result = "Eight"; break;
		case 9: result = "Nine"; break;

	}
	return result;
}
