//============================================================================
// Name        : HomeWork2-28-03-2017.cpp
// Author      : ty
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void Task1();
void Task2();
void Task3();
void Task4();
void Task5();


int main() {

//	Task1();
//	Task2();
//	Task3();
//	Task4();
	Task5();


	return 0;
}

void Task1(){
//	1. ����� ��������� ����� �[n] � �. �� �� ������ � ������
//	��������� �� ������� ������� �� � � ������,
//	��� -1 ��� �� ����. ������� � � �� �������� �� �����������.
	int n = 0, k = 0;
	bool kInArray = false;
	cout << "Enter size : ";
	cin >> n;
	cout << "Enter number K : ";
	cin >> k;

	int a[n];

	for (int i = 0; i < n; i++){
		cout << "Enter numbers : ";
		cin >> a[i];
	}
	for (int i = 0; i < n; i++){
		if(a[i] == k){
			cout << "Index of number K = " << i << endl;
			kInArray = true;
		}

	}

	if (!kInArray)
		cout << "There is NOT K in Array : " << -1 <<endl;
}

void Task2(){
//	2. ����� �[n]. �� �� ������ ����� ���� �� ����� �.
//	������� � � �� �������� �� �����������.

	int n = 0, k = 0, count = 0;
	cout << "Enter size : ";
	cin >> n;
	cout << "Enter number K : ";
	cin >> k;

	int a[n];

	for (int i = 0; i < n; i++){
		cout << "Enter numbers : ";
		cin >> a[i];
	}

	for (int i = 0; i < n; i++){
		if (a[i] == k){
			count++;
		}
	}
	cout << "Count K = " << count;
}

void Task3(){
//	3. ����� �[n]. �� �� ������ ������������  ������� � �������� ������.
//	������� �� ������� �� �����������.
	int n = 0, max = 0, b = 0;
	cout << "Enter size : ";
	cin >> n;

	int a[n];

	for(int i = 0; i < n; i++){
		cout << "Enter numbers : ";
		cin >> a[i];
	}

	for(int i = 0; i < n; i++){
		if(a[i] > max){
			max = a[i];
			b = i;
		}
	}
	cout << "Max number is : " << max << endl;
	cout << "Index of max number is : " << b << endl;

}

void Task4(){
//	4. ����� �[n]. �� �� ������� ����������� � ���������� �������.
//	������� �� ������� �� �����������.

	int n = 0, max = 0, min = 0;
		cout << "Enter size : ";
		cin >> n;

		int a[n];

		for(int i = 0; i < n; i++){
			cout << "Enter numbers : ";
			cin >> a[i];
		}

		max = min = a[0];

		for(int i = 0; i < n; i++){
			if(a[i] > max){
				max = a[i];

			}
			if (a[i] < min){
				min = a[i];
			}
		}

		cout << "Max number is : " << max << endl;
		cout << "Min number is : " << min << endl;

}
void Task5(){
//	5. ����� �[n]. �� �� ������� ������ �������� � ���-����� �������� � ������.
//	������� �� ������� �� �����������.

	int n = 0, min = 0;
	cout << "Enter size : ";
	cin >> n;

	int a[n];

	for (int i = 0; i < n; i++){
		cout << "Enter numbers : ";
		cin >> a[i];
	}
	min = a[0];
	for (int i = 0; i < n; i++){

		if (a[i] < min){
			min = a[i];
		}

	}
	for (int i = 0; i < n; i++){
		if (a[i] == min){
			cout << "Index : " << i << " has min value of : " << a[i] << endl;
		}
	}

}

