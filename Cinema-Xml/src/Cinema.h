/*
 * Cinema.h
 *
 *  Created on: Jun 3, 2017
 *      Author: asdf
 */

#ifndef CINEMA_H_
#define CINEMA_H_

#include <iostream>
#include "pugixml.hpp"
#include <string>
#include <vector>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <map>

using namespace std;

class Cinema {

public:

	Cinema(string filmName = "", string hallName = "", int hallId = 0, int capacity = 0, int soldTickets = 0, double pricePerTickets = 0);
	virtual ~Cinema();

	void loadXml(string);

	double turnoverCinema();
	int soldTickets();

	void turnoverPerScreening();	// task 1
	void maxTurnoverScreening();	// task 2
	void turnoverFilm();			// task 3
	void profitableScreening();		// task 5
	void searchByScreening(string);	// task 7
	void searchByfilm(string);

	int getCapacity() const;
	void setCapacity(int capacity);
	const string& getFilmName() const;
	void setFilmName(const string& filmName);
	int getHallId() const;
	void setHallId(int hallId);
	const string& getHallName() const;
	void setHallName(const string& hallName);
	double getPricePerTickets() const;
	void setPricePerTickets(double pricePerTickets);
	int getSoldTickets() const;
	void setSoldTickets(int soldTickets);

private:

	string m_filmName;
	string m_hallName;
	int m_hallId;
	int m_capacity;
	int m_soldTickets;
	int m_pricePerTickets;
	map <string, int> cinemaMap;
	multimap<double, string> cinemaMultimap;
	vector<Cinema> cinemaVector;
};

extern Cinema function;

#endif /* CINEMA_H_ */
