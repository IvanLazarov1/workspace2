#include <iostream>
#include <vector>

using namespace std;

//define sure salary
static const int hard_salary = 200;

int calculateSalary(int gross);

int main() {

	//define 2 vectors that holds week salary and salary ranges
	vector<int> salary (10, 0);
	vector<int> ranges (9, 0);

	//this will hold gross sales for every salesman
	int week_sales = 0;

	//ask 10 times for gross salary for every salesman
	for (size_t i = 0; i < salary.size(); i++){

		//nullify gross sale before next salesman
		week_sales = 0;

		//User enter gross sale for salesman N and write it into vector salary at given index
		cout << "Enter week sales in $ for salesman N" << i+1 << " : ";
		cin >> week_sales;
		salary.at(i) = calculateSalary(week_sales);
	}

	//this checks how much digits salary have and write +1 at vector ranges at given index
	for (size_t i = 0; i < salary.size(); i++){

		//checks how much digits salary have
		string numbers = to_string(salary.at(i));

		//if number are over 1000 write @ index 8
		if (numbers.size() > 3){

			ranges.at(8) += 1;

		}

		//else write at given index -2
		else{

			ranges.at((salary.at(i) / 100)-2) += 1;

		}

	}

	//print how much salary we have at given ranges
	for (size_t i = 0; i < ranges.size(); i++){

		if (i == ranges.size()-1)
		{
			cout << "Salary Range over 1000 counts : " << ranges.at(i) << endl;
		}

		else{
			cout << "Salary Range " << i+2 <<"00 - " << i+2 << "99 counts : " << ranges.at(i) << endl;
		}

	}


	return 0;
}

//this method get the gross sales and returns 9% + week hard salary
int calculateSalary(int gross){

	return (gross * 0.09) + hard_salary;

}
