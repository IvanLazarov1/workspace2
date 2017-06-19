//============================================================================
// Name        : Functions-part1.cpp
// Author      : ty
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

void printSign(int number);
void lessNum(int num1, int num2);
int multiply(int, int);

int main() {

	int num1, num2;

	cout << "Enter number 1 : ";
	cin >> num1;
	cout << "Enter number 2 : ";
	cin >> num2;

	int res;
	res = multiply(num1, num2);
	cout << res << endl;

	return 0;
}

int multiply(int a, int b){

	int result = a * b;
	return result;

}

void printSign(int number){

	if (number > 0)
		cout << "Positive";
	if (number < 0)
		cout << "Negative";
	if (number == 0)
		cout << "Zero";

}

void lessNum(int num1, int num2){

	if (num1 < num2)
		cout << "Number 1 is less";
	if (num1 > num2)
		cout << "Number 2 is less";
	if (num1 == num2)
		cout << "Numbers is equal";


}
