//============================================================================
// Name        : Cinema-Xml.cpp
// Author      : ty
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Cinema.h"

using namespace std;

int main() {

	function.loadXml("cinema.xml");
	function.loadXml("cinema2.xml");
	function.loadXml("cinema3.xml");

	function.turnoverPerScreening();											// task 1
	cout << "--------------------" << endl;
	function.maxTurnoverScreening();											// task 2
	cout << "--------------------" << endl;
	function.turnoverFilm();													// task 3
	cout << "--------------------" << endl;
	function.profitableScreening();
	cout << "--------------------" << endl;
	function.searchByScreening("Batman");										// task 7
	cout << "--------------------" << endl;

	cout << "Total turnover : $" << function.turnoverCinema() << endl;
	cout << "--------------------" << endl;
	cout << "Sold tickets : " << function.soldTickets() << endl;

	return 0;
}
