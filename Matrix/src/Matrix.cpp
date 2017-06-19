//============================================================================
// Name        : Matrix.cpp
// Author      : ty
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
using namespace std;

void Exercise1();
void Exercise2();
void Exercise3();
void Exercise4();
void Exercise5();
void Exercise6();

int main() {

//	Exercise1();
//	Exercise2();
//	Exercise3();
//	Exercise4();
//	Exercise5();
	Exercise6();

	return 0;
}
void Exercise1() {

	int n = 0;

	cout << "Enter matrix dim : ";
	cin >> n;

	int matrix[n][n];

	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){

			matrix[i][j] = 1 + rand() % 9;
			cout << matrix[i][j] << " ";

		}
		cout << endl;
	}

	cout << endl;
	cout << "///////////////" << endl;

	for (int i = 0; i < n; i++){

		cout << matrix[i][i] << " ";

	}

	cout << endl;
	cout << "///////////////" << endl;

	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
					cout << matrix[i][j] << " ";
		}
				cout << endl;
	}

	cout << endl;
	cout << "///////////////" << endl;

	for (int j = 0; j < n - 1; j++) {
		for (int i = j + 1; i < n; i++) {
				cout << matrix[i][j] << " ";
		}
			cout << endl;
	}

	cout << endl;
	cout << "///////////////" << endl;

	for (int i = 0, j = n - 1; i < n; i++, j--){

				cout << matrix[i][j] << " ";

	}

	cout << endl;
	cout << "///////////////" << endl;

	int reduceColums = n;

	for (int i = 0; i < n-1; i++){
		for (int j = 0; j < reduceColums-1; j++){

			cout << matrix[i][j] << " ";

		}
		reduceColums--;
		cout << endl;
	}

	cout << endl;
	cout << "///////////////" << endl;


	int j = n-1;

	for (int i = 1; i < n; i++){

		while (j < n)
		{
			cout << matrix[i][j] << " ";
			j++;
		}

		j-=i+1;

		cout << endl;
	}

}

void Exercise2() {
}

void Exercise3() {
}

void Exercise4() {
}

void Exercise5() {
}

void Exercise6() {

	int n;

	cout << "Enter matrix dim : ";
	cin >> n;

	int arr[n][n];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			arr[i][j] = 1 + rand() % 9;
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	cout << "//////////////////////////////" << endl;

	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	cout << "//////////////////////////////" << endl;

	for (int j = 0; j < n - 1; j++) {
		for (int i = j + 1; i < n; i++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
				cout << arr[i][j] << " ";
		}
		cout << endl;
	}

}
