//============================================================================
// Name        : Func1.cpp
// Author      : ty
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>

using namespace std;

int reverseDigits(int);

int main() {

	int num;
	cin >> num;
	int res;
	res = reverseDigits(num);
	cout << "Number is " << res;

	return 0;
}

int reverseDigits(int number){

	int count = 0;
	int memory = number;

	while(number > 0){
		int digit = number % 10;
		number = number / 10;
		count++;

	}

	int arr[count];
	int i = 0;
	while(memory > 0){
		int digit = memory % 10;
		memory = memory / 10;

		arr[i] = digit;
		i++;
	}
	int newNumber = 0;
	for(int i = 0; i < count; i++){


		newNumber = newNumber + arr[i] * pow(10, count - i - 1);

	}

return newNumber;
}
