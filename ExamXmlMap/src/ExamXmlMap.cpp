//============================================================================
// Name        : ExamXmlMap.cpp
// Author      : ty
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Items.h"
#include <map>
#include <algorithm>

using namespace std;

map<int, int> countInts(vector<int> ints);	// Task 2
vector<int> findByKey(map<string, vector<int> > keyValues, string key);	// Task 3
map<string, vector<int> > sortSecond( map<string, vector<int> > keyValues);	// Task 4
map<string, vector<int> > greaterK(map<string, vector<int> > keyValues, int k);	// Task 5

int main() {

	cout << "--------Task1---------" << endl;
	Items itemsObj;
	itemsObj.readXMLFile("Item.xml");
	for (size_t i = 0; i < itemsObj.itemsVector.size(); i++)
	{
		cout << "Item name : " << itemsObj.itemsVector.at(i).getName() << endl;
		cout << "Name id : " << itemsObj.itemsVector.at(i).getId() << endl;
		cout << "Item price : " << itemsObj.itemsVector.at(i).getPrice() << endl;
		cout << "Item quantity : " << itemsObj.itemsVector.at(i).getQuantity() << "\n" << endl;
	}

	cout << "--------Task2---------" << endl;

	vector<int> numbers = {2, 3, 3, 4, 5, 5, 7, 7, 8, 4,7};
		map<int, int> numberCount = countInts(numbers);

		map<int, int>::iterator it;
		for (it = numberCount.begin(); it != numberCount.end(); it++)
		{
			cout << "Numbers : " << it->first << " -> " << it->second << " times" << endl;
		}

	cout << "--------Task3---------" << endl;

	vector<int> vector1 = {1500, 789, 456, 793, 256};
	vector<int> vector2 = {3000, 4500, 1700, 560, 750};

	map<string, vector<int> > keyValue;

	keyValue["Ivan"] = vector1;
	keyValue["Georgi"] = vector2;

	vector<int> res = findByKey(keyValue, "Georgi");

	for(size_t i = 0 ; i< res.size();i++)
	{
		cout << "Salary - " << res.at(i) << endl;
	}
	cout << "--------Task4---------" << endl;

	vector<int> v1 = {123, 256, 896, 487, 458};
	vector<int> v2 = {369, 147, 156, 287, 423};
	map<string, vector<int> > map1;
	map1["key1"] = v1;
	map1["key2"] = v2;

	map<string, vector<int> > sortedVectors = sortSecond(map1);
	map<string, vector<int> >::iterator itr2;
	for(itr2 = sortedVectors.begin(); itr2 != sortedVectors.end(); itr2++)
	{

		vector<int> sortVector = itr2->second;
		cout << itr2->first << " : ";
		for(size_t i = 0 ; i< sortVector.size(); i++)
		{
			cout  << sortVector.at(i) << ", ";
		}
	}

	cout << "\n--------Task5---------" << endl;

	vector<int> vec1 = {3, 5, 10, 20, 45, 50};
	vector<int> vec2 = {1, 2, 13, 25, 46, 58};
	map<string, vector<int> > map11;
	map11["key1"] = vec1;
	map11["key2"] = vec2;

	map<string, vector<int> > greaterVectors = greaterK(map11, 40);
	map<string, vector<int> >::iterator itr4;
	for(itr4 = greaterVectors.begin(); itr4 != greaterVectors.end(); itr4++)
	{
		cout << itr4->first << " : ";
		vector<int> greaterVector = itr4->second;

		for(size_t i = 0 ; i< greaterVector.size(); i++)
		{
			cout << greaterVector.at(i) << ", ";
		}
	}

	return 0;
}

map<int, int> countInts(vector<int> ints)	// Task 2
{
	map<int, int> Counts;

			for (size_t i = 0; i < ints.size(); i++)
			{
				int nums = ints.at(i);

				if (Counts.find(nums) == Counts.end())
				{
					Counts[nums] = 1;
				}
					else
					{
						Counts[nums]++;
					}
			}

			return Counts;
}

vector<int> findByKey(map<string, vector<int> > keyValues, string key)	// Task 3
{
	vector<int> findKey;
	map<string, vector<int> >::iterator it1;
	for(it1 = keyValues.begin() ;  it1 != keyValues.end(); it1++)
	{
		if(it1-> first == key)
	    {
			findKey = it1 ->second;
	    }
	}
	return findKey;
}

map<string, vector<int> > sortSecond( map<string, vector<int> > keyValues)	// Task 4
{
	map<string, vector<int> > mapWithSortVectors;
	map<string, vector<int> >::iterator itr;
	for(itr = keyValues.begin(); itr != keyValues.end(); itr++)
	{
		vector<int> sortVect = itr->second;
		sort(sortVect.begin(), sortVect.begin() + sortVect.size());
		mapWithSortVectors[itr->first] = sortVect;
	}
	return mapWithSortVectors;
}

map<string, vector<int> > greaterK(map<string, vector<int> > keyValues, int k)
{
	map<string, vector<int> > map1;
	map<string, vector<int> >::iterator itr3;
	for (itr3 = keyValues.begin(); itr3 != keyValues.end(); itr3++)
	{
		vector<int> vector1;
		vector<int> vector2 = itr3->second;

		for (size_t i = 0; i < vector2.size(); i++)
		{

			if (vector2.at(i) > k)
			{
				vector1.push_back(vector2.at(i));
			}
		}
		map1[itr3->first] = vector1;

	}
	return map1;
}
