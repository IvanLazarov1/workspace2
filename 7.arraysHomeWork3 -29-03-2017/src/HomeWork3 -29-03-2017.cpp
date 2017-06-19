//============================================================================
// Name        : HomeWork3.cpp
// Author      : ty
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void Task1();
void Task2();
void Task3();
void Task4();

int main() {

//	Task1();
//	Task2();
//	Task3();
	Task4();

	return 0;
}

void Task1() {
//	1. A[n] да се намери максималния елемент.

	int n = 0, max = 0;
	cout << "Enter size : ";
	cin >> n;

	int a[n];

	for (int i = 0; i < n; i++) {
		cout << "Enter numbers : ";
		cin >> a[i];
	}

	for (int i = 0; i < n; i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}
	cout << "Max number is : " << max << endl;
}
void Task2() {
//	2. a[n][m] да се намери сумата на елементите.

	int n, m, sum = 0;
	cout << "Enter colons of the array : ";
	cin >> n;
	cout << "Enter row of the array : ";
	cin >> m;

	int a[n][m];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << "Enter numbers : ";
			cin >> a[i][j];
		}

	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			sum += a[i][j];
		}

	}
	cout << "Sum = " << sum;
}
void Task3() {
//	3. a[n][m] да се намери произведението на всяка колона поотделно.

	int n, m;

	cout << "Enter colons of the array : ";
	cin >> n;
	cout << "Enter row of the array : ";
	cin >> m;

	int a[n][m];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << "Enter numbers : ";
			cin >> a[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	int result;

	for (int j = 0; j < m; j++) {
		result = 1;
		for (int i = 0; i < n; i++) {

			result *= a[i][j];

		}
		cout << "Column - " << j << " Result = " << result << endl;
	}

}
void Task4() {
//	4. a[n][m] да се намери сумата на рамката.


	srand(time(0));

	int n = 0, m = 0, sum = 0;

	cout << "Enter columns : ";
	cin >> n;
	cout << "Enter row : ";
	cin >> m;

	int frameworkArray[n][m];

	//Fill 2d array with randoms from 1-9
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			frameworkArray[i][j] = rand()%10;
		}
	}

	//Cout 2d array to console
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cout << frameworkArray[i][j];
		}
		cout << endl;
	}

	cout << endl;

	//Get framework sum from array
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			if (i == 0 || j == 0 || j == m-1 || i == n-1)
			   sum += frameworkArray[i][j];
		}
	}

	cout << "Sum of framework is : " << sum;

}
