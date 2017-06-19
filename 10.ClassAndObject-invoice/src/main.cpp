//============================================================================
// Name        : ClassAndObject-invoice.cpp
// Author      : ty
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "invoice.h"
using namespace std;

int main() {

//Създайте клас инвойс, класът трябва да има 4 дата мембъра.
//първия мембер е парт от
//(тип стринг) number , description
//(тип инт) бройка
//(флоут) цена.
//конструктора трябва да инициялизира и четиритте мембера.
//напишете сет и гет функций за всеки мембер
//	напишете функция която се казва getInvoiceAmmount която калкулира бройката която имаш налична.
//да умножава бройката по цената.
	string name;
	int quantity;
	float price;

	Invoice hw("1" ,"4uk", 7, 2.35);
	Invoice hw2("2");
	cout << "Enter item name : ";
	cin >> name;
	cout << "Enter quantity : ";
	cin >> quantity;
	cout << "Enter item price";
	cin >> price;

	hw2.setPartDescription(name);
	hw2.setQuantity(quantity);
	hw2.setPrice(price);

	cout << hw2.getInfo() << endl;
	cout << hw2.getInvoiceAmmount() << endl;


	return 0;
}
