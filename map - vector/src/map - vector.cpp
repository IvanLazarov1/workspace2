#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

int countingValues(vector<int> ints, int value)
{
		int count = 0;
		for (size_t i = 0; i < ints.size(); i++)
		{
			if (ints.at(i) == value)
			{
				count++;
			}
		}
		return count;
}
//1
map<string, int> mapForGradesCount(vector<int> ints)
{
	int res2 = countingValues(ints, 2);
	int res3 = countingValues(ints, 3);
	int res4 = countingValues(ints, 4);
	int res5 = countingValues(ints, 5);
	int res6 = countingValues(ints, 6);

	map<string, int> gradesCount;

	gradesCount["two"] = res2;
	gradesCount["three"] = res3;
	gradesCount["four"] = res4;
	gradesCount["five"] = res5;
	gradesCount["six"] = res6;


	return gradesCount;
}
//2
map<int, int> mapForSalariesCount(vector<int> salaries)
{
	map<int, int> salariesCount;

		for (size_t i = 0; i < salaries.size(); i++)
		{
			int salary = salaries.at(i);

			if (salariesCount.find(salary) == salariesCount.end())
			{
				salariesCount[salary] = 1;
			}
				else
				{
					salariesCount[salary]++;
				}
		}

		return salariesCount;
}
//3
vector<int> findNMostFrequent(vector<int> ints, size_t n)
{
	map<int, int>countNumbers;
	for (size_t i = 0; i < ints.size(); i++)
	{
		int number = ints.at(i);
		if (countNumbers.find(number) == countNumbers.end())
		{
			countNumbers[number] = 1;
		}
			else
			{
				countNumbers[number]++;
			}
	}

	int maxCount = 0;
	map<int, int>::iterator it;
	for (it = countNumbers.begin(); it != countNumbers.end(); it++)
	{
		int val = it->second; //broikata
		if (val > maxCount)
		{
			maxCount = val;
		}
	}

	vector<int> numbersMaxCount; //vector for numbers with maxCount frequency
	for (it = countNumbers.begin(); it != countNumbers.end(); it++)
	{
		int val = it->second;
//		int key = it->first;
		if (val == maxCount)
		{
			numbersMaxCount.push_back(it->first);
		}
	}

	vector<int> result;
	for (size_t i = 0; i < n; i++)
	{
		result.push_back(numbersMaxCount[i]);
	}

	return result;
}
//4
map<string, double> calculateAvarage(map<string, vector<int> > studentsGrades)
{
	map<string, double> result;
	map<string, vector<int> >::iterator it;
	for (it = studentsGrades.begin(); it != studentsGrades.end(); it++)
	{
		vector<int> v = it->second; //vector with grades
		double sum = 0;
		for (size_t i = 0; i < v.size(); i++)
		{
			sum = sum + v.at(i);
		}
		double avg = sum / v.size();
		result[it->first] = avg;
	}
	return result;
}
//5
vector<string> studentsToNextLevel(map<string, vector<int> > studentsGrades)
{
	vector<string> result;
	map<string, vector<int> >::iterator it;
	for (it = studentsGrades.begin(); it != studentsGrades.end(); it++)
	{
		vector<int> v = it->second;
		for (size_t i = 0; i < v.size(); i++)
		{
			if (v[i] >= 5)
			{
				result.push_back(it->first);
				break;
			}
		}
	}
	return result;
}

int main() {
	cout << "-------------1--------------" << endl;

	vector<int> grades = {3, 4, 3, 4, 6, 4, 5, 5, 2};
	map<string, int> mapGradeCount = mapForGradesCount(grades);

	map<string, int>::iterator itr;
	for (itr = mapGradeCount.begin(); itr != mapGradeCount.end(); itr++)
	{
		cout << itr->first << " = " << itr->second << endl;
	}

	cout << "-------------2--------------" << endl;

	vector<int> salaries = {1299, 4550, 5667, 888, 4550, 888};
	map<int, int>mapSalCount =  mapForSalariesCount(salaries);

	map<int, int>::iterator it;
	for (it = mapSalCount.begin(); it != mapSalCount.end(); it++)
	{
		cout << "Salary of " << it->first << " - " << it->second << " Emplyes" << endl;
	}

	cout << "-------------3--------------" << endl;

	vector<int> digits = {23, 56, 77, 23, 44, 55, 77, 23, 5, 8, 9, 0, 77, 9, 9};
	vector<int> nDigits = findNMostFrequent(digits, 3);
	for (size_t i = 0; i < nDigits.size(); i++)
	{
		cout << "Number -> " <<nDigits.at(i) << " = 3 times" << endl;
	}

	cout << "-------------4--------------" << endl;

	map<string, vector<int> > mapStudentsGrades;

	vector<int> grades1 = {2, 3, 2, 2, 4, 3};
	vector<int> grades2 = {4, 4, 5, 6, 4, 5};
	vector<int> grades3 = {4, 4, 6, 5, 6, 4};

	mapStudentsGrades["Mimi"] = grades1;
	mapStudentsGrades["Lili"] = grades2;
	mapStudentsGrades["Ivan"] = grades3;

	map<string, double> avgStudentGrades = calculateAvarage(mapStudentsGrades);
	map<string, double>::iterator itrr;
	for (itrr = avgStudentGrades.begin(); itrr != avgStudentGrades.end(); itrr++)
	{
		cout << "Student " << itrr->first << " has avarage of " << itrr->second << endl;
	}

	cout << "--------------5-------------" << endl;

	vector<string> names = studentsToNextLevel(mapStudentsGrades);
	for (size_t i = 0; i < names.size(); i++)
	{
		cout << "Student " << names.at(i) << " has going to next level" << endl;
	}
	return 0;
}


