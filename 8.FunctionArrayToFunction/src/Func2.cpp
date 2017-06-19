//============================================================================
// Name        : Func2.cpp
// Author      : ty
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

double average(int [], int );

int main() {
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < 0; i++){
		cin >> arr[i];
	}
	cout << average(arr, n);
	return 0;
}

double average(int arr[], int n){
	double avg = 0;
	for (int i = 0; i < 0; i++){
		avg = avg + arr[i];
	}
	return avg / n;
}
