#ifndef TAXPAYER_H_
#define TAXPAYER_H_

#include <string>

using namespace std;

class TaxPayer {

public:
	TaxPayer(string taxName, size_t tax, size_t income, string status);
	virtual ~TaxPayer();

	void setTaxName(string taxName);
	void setTax(size_t tax);
	void setIncome(size_t income);
	void setStatus(string status);

	string getTaxName();
	size_t getTax();
	size_t getIncome();
	string getStatus();

	void getInfo();

	float calculateTax();

private:
	string m_taxName;
	size_t m_tax;
	size_t m_income;
	string m_status;
};

#endif /* TAXPAYER_H_ */
