#include "TreeWorker.h"

using namespace std;

TreeWorker::TreeWorker(string firstName, string secondName, string lastName, size_t egn,
		string address, size_t phone, string gender,
		double ratePerTree, double treatedTrees, double rateBonus, double salary) {

	m_ratePerTree = ratePerTree;
	m_treatedTrees = treatedTrees;
	m_rateBonus = rateBonus;
	m_salary = salary;

}

TreeWorker::~TreeWorker() {
	// Auto-generated destructor stub
}

double TreeWorker::getRateBonus() const {
	return m_rateBonus;
}

void TreeWorker::setRateBonus(double rateBonus) {
	m_rateBonus = rateBonus;
}

double TreeWorker::getRatePerTree() const {
	return m_ratePerTree;
}

void TreeWorker::setRatePerTree(double ratePerTree) {
	m_ratePerTree = ratePerTree;
}

double TreeWorker::getTreatedTrees() const {
	return m_treatedTrees;
}

void TreeWorker::setTreatedTrees(double treatedTrees) {
	m_treatedTrees = treatedTrees;
}

double TreeWorker::calculateSalary() {

	if (m_treatedTrees < 150){

		m_salary += ((m_ratePerTree * m_treatedTrees) * m_rateBonus) - 250;

	}else {

		if (m_treatedTrees > 300){

			m_salary += ((m_ratePerTree * m_treatedTrees) * m_rateBonus) + 650;

		}
	}
	return m_salary;
}

double TreeWorker::getSalary() const {
	return m_salary;
}

void TreeWorker::setSalary(double salary) {
	m_salary = salary;
}
