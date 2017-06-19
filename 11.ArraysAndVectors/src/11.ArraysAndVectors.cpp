//============================================================================
// Name        : ArraysAndVectors.cpp
// Author      : ty
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	const int arraySize = 11;
	int n[arraySize] = {0, 0, 0, 0, 0, 0, 0, 5, 2, 5, 4 };


	for (int i = 0; i < arraySize; i++){
		if (i == 0){
			cout << " " << i * 10 << " - " << (i * 10) + 9;
		}else{
			if (i == 10){
				cout << "     " << i * 10;
			}else{
				cout << i * 10 << " - " << (i * 10) + 9;
			}
		}
		for (int stars = 0; stars < n[i]; stars++){
			cout << "*";
		}
		cout << endl;

	}

	return 0;
}
