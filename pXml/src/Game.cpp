/*
 * Game.cpp
 *
 *  Created on: Jun 5, 2017
 *      Author: asdf
 */

#include "Game.h"

using namespace std;

Game::Game(int id, string name, int level, int startCredit, int endCredit)
{
	setId(id);
	setName(name);
	setLevel(level);
	setStartCredit(startCredit);
	setEndCredit(endCredit);
}

Game::~Game() {
	// Auto-generated destructor stub
}

void Game::loadXml1(string xmlPath)
{
	pugi::xml_document doc1;

	if (!doc1.load_file(xmlPath.c_str()))
		cerr << "No such file";

	pugi::xml_node hall = doc1.child("hall");

	Game game1;
	for (pugi::xml_node child = hall.first_child(); child; child = child.next_sibling())
	{
		game1.setId(child.child("id").text().as_int());
		game1.setName(child.child("name").text().as_string());
		game1.setLevel(child.child("level").text().as_int());
		game1.setStartCredit(child.child("startcredit").text().as_int());
		game1.setEndCredit(child.child("endcredit").text().as_int());

		gameVector1.push_back(game1);
		gameVector.push_back(game1);
	}
}
void Game::loadXml2(string xmlPath)
{
	pugi::xml_document doc2;

	if (!doc2.load_file(xmlPath.c_str()))
		cerr << "No such file";

	pugi::xml_node hall = doc2.child("hall");

	Game game2;
	for (pugi::xml_node child = hall.first_child(); child; child = child.next_sibling())
	{
		game2.setId(child.child("id").text().as_int());
		game2.setName(child.child("name").text().as_string());
		game2.setLevel(child.child("level").text().as_int());
		game2.setStartCredit(child.child("startcredit").text().as_int());
		game2.setEndCredit(child.child("endcredit").text().as_int());

		gameVector2.push_back(game2);
		gameVector.push_back(game2);
	}
}
void Game::loadXml3(string xmlPath)
{
	pugi::xml_document doc3;

	if (!doc3.load_file(xmlPath.c_str()))
		cerr << "No such file";

	pugi::xml_node hall = doc3.child("hall");

	Game game3;
	for (pugi::xml_node child = hall.first_child(); child; child = child.next_sibling())
	{
		game3.setId(child.child("id").text().as_int());
		game3.setName(child.child("name").text().as_string());
		game3.setLevel(child.child("level").text().as_int());
		game3.setStartCredit(child.child("startcredit").text().as_int());
		game3.setEndCredit(child.child("endcredit").text().as_int());

		gameVector3.push_back(game3);
		gameVector.push_back(game3);
	}
}

int Game::casinoTurnover()
{
	loadXml1( "casino1.xml" );
	loadXml2( "casino2.xml" );
	loadXml3( "casino3.xml" );

	int result = 0;

	for (size_t i = 0; i < gameVector.size(); i++)
	{
		result += gameVector.at(i).getStartCredit() - gameVector.at(i).getEndCredit();
	}

	return result;
}

void Game::putInMap1()
{
	for (size_t i = 0; i < gameVector1.size(); i++)
	{
		int res = gameVector1.at(i).getStartCredit() - gameVector1.at(i).getEndCredit();
		string name = gameVector1.at(i).getName();
		gameMap1.insert(pair<string, int>(name , res));
	}
}
void Game::putInMap2()
{
	for (size_t i = 0; i < gameVector2.size(); i++)
	{
		int res = gameVector2.at(i).getStartCredit() - gameVector2.at(i).getEndCredit();
		string name =  gameVector2.at(i).getName();
		gameMap2.insert(pair<string, int>(name , res));
	}
}
void Game::putInMap3()
{
	for (size_t i = 0; i < gameVector3.size(); i++)
	{
		int res = gameVector3.at(i).getStartCredit() - gameVector3.at(i).getEndCredit();
		string name =  gameVector3.at(i).getName();
		gameMap3.insert(pair<string, int>(name , res));
	}
}

void Game::gameTurnover()
{
	loadXml1( "casino1.xml" );
	loadXml2( "casino2.xml" );
	loadXml3( "casino3.xml" );

	cout << "----Casino1----" << endl;
	map<string ,int>::iterator itr1;
	putInMap1();
	for (itr1 = gameMap1.begin(); itr1 != gameMap1.end(); ++itr1)
	{
		cout << itr1 -> first << " = $" << itr1 -> second << endl;
	}
	cout << "----Casino2----" << endl;
	map<string ,int>::iterator itr2;
	putInMap2();
	for (itr2 = gameMap2.begin(); itr2 != gameMap2.end(); ++itr2)
	{
		cout << itr2 -> first << " = $" << itr2 -> second << endl;
	}
	cout << "----Casino3----" << endl;
	map<string ,int>::iterator itr3;
	putInMap3();
	for (itr3 = gameMap3.begin(); itr3 != gameMap3.end(); ++itr3)
	{
		cout << itr3 -> first << " = $" << itr3 -> second << endl;
	}
}
void Game::lessPlayGame()
{

}
void Game::putInMultiMap()
{
	for (size_t i = 0 ; i < gameVector.size(); i++)
		{
			gameMultiMap.insert( pair<string, int>( gameVector.at(i).getName(), gameVector.at(i).getLevel()) );
		}
}
void Game::greatPlayGame()
{
	loadXml1( "casino1.xml" );
	loadXml2( "casino2.xml" );
	loadXml3( "casino3.xml" );

	putInMultiMap();

	multimap<string ,int>::iterator itr;
	int countBlackJack = 0, countPoker = 0, countRoulette = 0;
		for (itr = gameMultiMap.begin(); itr != gameMultiMap.end(); ++itr)
		{
			if (itr-> first == "Black jack")
			{
				countBlackJack++;
			}
			if (itr-> first == "Poker")
			{
				countPoker++;
			}
			if (itr-> first == "Roulette")
			{
				countRoulette++;
			}
		}
		cout << "Black jack - " << countBlackJack << endl;
		cout << "Poker - " << countPoker << endl;
		cout << "Roulette - " << countRoulette << endl;
}
void Game::searchGame(string name)
{
	loadXml1( "casino1.xml" );
	loadXml2( "casino2.xml" );
	loadXml3( "casino3.xml" );

	for (size_t i = 0; i < gameVector.size(); i++)
	{
		if (gameVector.at(i).getName() == name)
		{
			cout << gameVector.at(i).getName() << " - " << gameVector.at(i).getLevel() << endl;
		}
	}
}

int Game::getEndCredit() const {
	return m_endCredit;
}

void Game::setEndCredit(int endCredit) {
	m_endCredit = endCredit;
}

int Game::getId() const {
	return m_id;
}

void Game::setId(int id) {
	m_id = id;
}

const string& Game::getName() const {
	return m_name;
}

void Game::setName(const string& name) {
	m_name = name;
}

int Game::getStartCredit() const {
	return m_startCredit;
}

void Game::setStartCredit(int startCredit) {
	m_startCredit = startCredit;
}

int Game::getLevel() const {
	return m_level;
}

void Game::setLevel(int level) {
	m_level = level;
}

Game accessGame;
