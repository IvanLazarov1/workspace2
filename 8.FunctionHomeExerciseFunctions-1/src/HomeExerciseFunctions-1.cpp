//============================================================================
// Name        : HomeExerciseFunctions-1.cpp
// Author      : ty
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <limits>

using namespace std;

void reverseNumber();
void averageOfaSequence();
void linearEquation();
bool validateInput(int numberToValidate );

int main() {
//	4. Напишете програма която решава тези задачи:
//	- Обръща числото наобратно.
//	- Calculates the average of a sequence.
//	- Solves a linear equation a * x + b = 0
//	Създайте подходящи функции.
//	Направете просто текстово-базирано меню за потребителя
//	да избере кои задачи да реши.
//	Проверка на входните данни:
//	- The decimal number should be non-negative
//	- Последователността не трябва да бъде празна.
//	- а не трябва да е равна на 0.

	int menu = 0;
	cout << "Select 1 to reverse number" << endl;
	cout << "Select 2 to calculates the average of a sequence." << endl;
	cout << "Select 3 to Solves a linear equation" << endl;


	while (cout << "Select function : " && (!(cin >> menu) || menu <= 0 || menu > 3))
	{
	    cout << "Wrong choice !!!" << endl;
	    cin.clear();
	    cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}

	switch (menu) {
	case 1: reverseNumber(); break;
	case 2: averageOfaSequence(); break;
	case 3: linearEquation(); break;
	//default: cout << "Wrong choice !!!"; break;
	}

	return 0;
}

void reverseNumber() {
	// обръща числото наобратно

	int num, i = 10;

	do{
	cout << "Enter number to reverse : ";
	cin >> num;
	}while(num <= 0);

	do {
		cout << (num % i) / (i / 10);
		i *= 10;
	} while ((num * 10) / i != 0);

}

void averageOfaSequence(){

	int n, sum = 0;
	double ss;

	cout << "Enter Size : ";

	cin >> n;

	int a[n];

		for (int i = 0; i < n; i++){
	    	 cout << "Enter numbers : " << endl;
	    	 cin >> a[i];
	     }

	    for (int i = 0; i < n; i++){
	    	 sum += a[i];
	     }

	     ss = sum;
	     ss /= n;

	     cout << "Sum = " << sum <<endl;
	     cout << "Average of a sequence : " << ss <<endl;

}

void linearEquation(){

	int a = 0, b = 0, x = 0, sum = 0;

	cout << "Enter a : ";
	cin >> a;
	cout << "Enter b : ";
	cin >> b;
	cout << "Enter x : ";
	cin >> x;

	sum = (a * x) + b;

	cout << "a * x + b = " << sum;

}

bool validateInput(int numberToValidate ) {

	cout << numberToValidate << endl;

	if (numberToValidate <= 0)
	return true;
	else
	return false;
}
