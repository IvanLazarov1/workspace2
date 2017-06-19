#include "GrassWorker.h"

using namespace std;

GrassWorker::GrassWorker(string firstName, string secondName, string lastName, size_t egn,
		string address, size_t phone, string gender,
		double ratePerSquareMeter, double treatedArea, double salary) {

	m_ratePerSquareMeter = ratePerSquareMeter;
	m_treatedArea = treatedArea;
	m_salary = salary;

}

GrassWorker::~GrassWorker() {
	// Auto-generated destructor stub
}

double GrassWorker::getRatePerSquareMeter() const {
	return m_ratePerSquareMeter;
}

void GrassWorker::setRatePerSquareMeter(double ratePerSquareMeter) {
	m_ratePerSquareMeter = ratePerSquareMeter;
}

double GrassWorker::getTreatedArea() const {
	return m_treatedArea;
}

void GrassWorker::setTreatedArea(double treatedArea) {
	m_treatedArea = treatedArea;
}

double GrassWorker::calculateSalary() {

	if (m_treatedArea < 5000){

		m_salary += (m_ratePerSquareMeter * m_treatedArea) - 200;

	}else {

		if (m_treatedArea > 10000){

		m_salary += (m_ratePerSquareMeter * m_treatedArea) + 500;

		}

	}
	return m_salary;
}

double GrassWorker::getSalary() const {
	return m_salary;
}

void GrassWorker::setSalary(double salary) {
	m_salary = salary;
}
