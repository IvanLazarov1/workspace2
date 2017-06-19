/*
 * Game.h
 *
 *  Created on: Jun 5, 2017
 *      Author: asdf
 */

#ifndef GAME_H_
#define GAME_H_

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "pugixml.hpp"

using namespace std;

class Game {

public:

	Game(int id = 0, string name = "", int level = 0, int startCredit = 0, int endCredit = 0);
	virtual ~Game();

	void loadXml1(string xmlPath);
	void loadXml2(string xmlPath);
	void loadXml3(string xmlPath);

	int casinoTurnover();	//ok

	void putInMap1();
	void putInMap2();
	void putInMap3();
	void putInMultiMap();

	void gameTurnover();	//ok
	void lessPlayGame();
	void greatPlayGame();	//ok
	void searchGame(string);

	void print() const;
	int getEndCredit() const;
	void setEndCredit(int endCredit);
	int getId() const;
	void setId(int id);
	const string& getName() const;
	void setName(const string& name);
	int getStartCredit() const;
	void setStartCredit(int startCredit);
	int getLevel() const;
	void setLevel(int level);

	vector<Game> gameVector;
	vector<Game> gameVector1;
	vector<Game> gameVector2;
	vector<Game> gameVector3;
	multimap<string, int> gameMultiMap;
	map<string, int> gameMap1;
	map<string, int> gameMap2;
	map<string, int> gameMap3;

private:

	int m_id;
	string m_name;
	int m_level;
	int m_startCredit;
	int m_endCredit;



};
extern Game accessGame;

#endif /* GAME_H_ */
