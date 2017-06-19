//============================================================================
// Name        : MapExercise.cpp
// Author      : ty
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {

	map<int, int, less<int> > counters;

	map<int, int>::iterator it;

	vector<int> myVector = { 2, 5, 79, 66, 55, 2, 66, 5, 66, 1 };

	for (size_t i = 0; i < myVector.size(); i++) {

		int key = myVector.at(i);
		it = counters.find(key);

		if (it != counters.end()) {
			// ima takova chislo v map-a
			counters[key]++;

		} else {
			//nqma takova chislo v map-a
			counters[key] = 1;
		}

	}

//	vector<int>::iterator itv;

	cout << "Numbers" << "\t" << "Occurences" << endl;
	for (it = counters.begin(); it != counters.end(); it++) {

		cout << it->first << "\t" << it->second << endl;

	}

	cout << "///////////////////////" << endl;

	for (it = counters.begin(); it != counters.end(); it++) {

		if (it->second % 2 == 0) {

			cout << it->first << "\t" << it->second << endl;
		}
	}

	return 0;
}
