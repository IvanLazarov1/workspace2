//============================================================================
// Name        : PopravkaXml.cpp
// Author      : ty
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Game.h"

using namespace std;

int main() {

	do
	{
		int menu = 0;
		cout << "Enter 1 for total turn over\n"
				"Enter 2 for turnover on game\n"
				"Enter 3 for great play game\n"
				"Enter 4 for search game\n"
				"Enter 5 for exit\n"
				"? ";
		cin >> menu;
		string name;

		switch ( menu )
		{
			case 1 : cout << "Casino turnover is : $" << accessGame.casinoTurnover() << endl; break;
			case 2 : accessGame.gameTurnover(); break;
			case 3 : accessGame.greatPlayGame(); break;
			case 4 : cout << "Enter name : "; cin >> name; accessGame.searchGame( name ); break;
			case 5 : exit(1);
			default : cout << "try again";
		}

	}
	while( cin );

	return 0;
}
