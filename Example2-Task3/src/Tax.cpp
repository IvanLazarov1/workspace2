#include <iostream>
#include "TaxPayer.h"

using namespace std;

int main()
{
	TaxPayer payer1("Sgradi", 100, 35000, "5" );
	TaxPayer payer2("Smet", 50, 10000, "3" );

	payer1.getInfo();
    payer2.getInfo();

	cout << "Payer1 tax with discount is : " << payer1.calculateTax() <<endl;
	cout << "Payer2 tax with discount is : " << payer2.calculateTax() <<endl;

	return 0;
}
