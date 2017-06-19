#include "TaxPayer.h"

#include <iostream>

TaxPayer::TaxPayer(string taxName, size_t tax, size_t income, string status) {

	m_taxName = taxName;
	m_tax = tax;
	m_income = income;
	m_status = status;
}

TaxPayer::~TaxPayer() {

}

void TaxPayer::setTaxName(string taxName) {
	m_taxName = taxName;
}

void TaxPayer::setTax(size_t tax) {
	m_tax = tax;
}

void TaxPayer::setIncome(size_t income) {
	m_income = income;
}

void TaxPayer::setStatus(string status) {
	m_status = status;
}

string TaxPayer::getTaxName() {
	return m_taxName;
}

size_t TaxPayer::getTax() {
	return m_tax;
}

size_t TaxPayer::getIncome() {
	return m_income;
}

string TaxPayer::getStatus() {
	return m_status;
}

void TaxPayer::getInfo() {
	cout << "Tax name is : " << m_taxName << endl;
	cout << "Tax is : " << m_tax << endl;
	cout << "Income is : " << m_income << endl;
	cout << "Status is : " << m_status << endl <<endl;
}

float TaxPayer::calculateTax() {

	if (m_income > 30000 && m_status == "5")
	{
		return m_tax -= m_tax * 0.03;
	}

	else if (m_income < 12000 && m_status == "3")
	{
		return m_tax -= m_tax * 0.02;
	}

	else
	{
		return m_tax;
	}
}
