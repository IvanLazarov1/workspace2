#ifndef TREEWORKER_H_
#define TREEWORKER_H_

#include <string>
#include "Worker.h"

using namespace std;

class TreeWorker : public Worker {

public:

	TreeWorker(string firstName = "", string secondName = "", string lastName = "", size_t egn = 0,
			string address = "", size_t phone = 0, string gender = "",
			double ratePerTree = 0, double treatedTrees = 0, double rateBonus = 0, double salary = 0);

	virtual ~TreeWorker();

	double getRateBonus() const;
	void setRateBonus(double rateBonus);
	double getRatePerTree() const;
	void setRatePerTree(double ratePerTree);
	double getTreatedTrees() const;
	void setTreatedTrees(double treatedTrees);

	double calculateSalary();
	double getSalary() const;
	void setSalary(double salary);

private:

	double m_ratePerTree;
	double m_treatedTrees;
	double m_rateBonus;
	double m_salary;

};

#endif /* TREEWORKER_H_ */
