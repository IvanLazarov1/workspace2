#ifndef GRASSWORKER_H_
#define GRASSWORKER_H_

#include <string>
#include "Worker.h"

using namespace std;

class GrassWorker : public Worker {

public:

	GrassWorker(string firstName = "", string secondName = "", string lastName = "", size_t egn = 0,
			string address = "", size_t phone = 0, string gender = "",
			double ratePerSquareMeter = 0, double treatedArea = 0, double salary = 0);

	virtual ~GrassWorker();

	double getRatePerSquareMeter() const;
	void setRatePerSquareMeter(double ratePerSquareMeter);
	double getTreatedArea() const;
	void setTreatedArea(double treatedArea);

	double calculateSalary();
	double getSalary() const;
	void setSalary(double salary);

private:

	double m_ratePerSquareMeter;
	double m_treatedArea;
	double m_salary;

};

#endif /* GRASSWORKER_H_ */
