/*
 * Cinema.cpp
 *
 *  Created on: Jun 3, 2017
 *      Author: asdf
 */

#include "Cinema.h"

using namespace std;

Cinema::Cinema(string filmName, string hallName, int hallId, int capacity, int soldTickets, double pricePerTickets)
{
	setFilmName(filmName);
	setHallName(hallName);
	setHallId(hallId);
	setCapacity(capacity);
	setSoldTickets(soldTickets);
	setPricePerTickets(pricePerTickets);
}

Cinema::~Cinema() {
	// Auto-generated destructor stub
}

int Cinema::getCapacity() const {
	return m_capacity;
}

void Cinema::setCapacity(int capacity) {
	m_capacity = capacity;
}

const string& Cinema::getFilmName() const {
	return m_filmName;
}

void Cinema::setFilmName(const string& filmName) {
	m_filmName = filmName;
}

int Cinema::getHallId() const {
	return m_hallId;
}

void Cinema::setHallId(int hallId) {
	m_hallId = hallId;
}

const string& Cinema::getHallName() const {
	return m_hallName;
}

void Cinema::setHallName(const string& hallName) {
	m_hallName = hallName;
}

double Cinema::getPricePerTickets() const {
	return m_pricePerTickets;
}

void Cinema::setPricePerTickets(double pricePerTickets) {
	m_pricePerTickets = pricePerTickets;
}

int Cinema::getSoldTickets() const {
	return m_soldTickets;
}

void Cinema::setSoldTickets(int soldTickets) {
	m_soldTickets = soldTickets;
}

void Cinema::loadXml(string xmlPath)
{
	pugi::xml_document doc;

	if (!doc.load_file(xmlPath.c_str()))
		cerr << "No such file";

	pugi::xml_node cinemaNode = doc.child("cinema");

	Cinema cinema;
	for (pugi::xml_node child = cinemaNode.first_child(); child; child = child.next_sibling("screening"))
	{
		cinema.setFilmName(child.child("filmname").text().as_string());
		cinema.setHallName(child.child("hall").text().as_string());
		cinema.setCapacity(child.child("capacity").text().as_int());
		cinema.setSoldTickets(child.child("soldtickets").text().as_int());
		cinema.setPricePerTickets(child.child("pricepertickets").text().as_double());

		cinemaVector.push_back(cinema);
	}
}

void Cinema::turnoverPerScreening()				// task 1
{

	for (size_t i = 0; i < cinemaVector.size(); i++)
		{
			cout << "Screening name : " << cinemaVector.at(i).getFilmName() << " - $"
					<<  cinemaVector.at(i).getPricePerTickets() * cinemaVector.at(i).getSoldTickets() << endl;
		}
}
void Cinema::maxTurnoverScreening()				// task 2
{
	for (size_t i = 0; i < cinemaVector.size(); i++)
	{
		int coef = cinemaVector.at(i).getSoldTickets() * cinemaVector.at(i).getPricePerTickets();
	    string name =  cinemaVector.at(i).getFilmName();
	    cinemaMultimap.insert(pair<double, string>(coef , name));
	}

	cout <<"Max turnover Screening : " << cinemaMultimap.rbegin()->second<< " - $" << cinemaMultimap.rbegin()->first << endl;
}
void Cinema::turnoverFilm()						// task 3
{
	multimap<double,string>::iterator itr ;

	for (itr = cinemaMultimap.begin(); itr != cinemaMultimap.end(); itr++)
	{
		if (cinemaMap.find(itr -> second) != cinemaMap.end())
		{
			cinemaMap[itr -> second] = cinemaMap[itr -> second] + itr -> first;
	    }
	    else
	        {
	    	cinemaMap[itr -> second] = itr -> first;
	        }

	}

	map<string ,int>::iterator m_it;

	for (m_it = cinemaMap.begin(); m_it != cinemaMap.end(); m_it++)
	{
		cout << m_it -> first << " = $" <<m_it -> second << endl;
	}
}
void Cinema::profitableScreening()				// task 5
{
	for (size_t i = 0 ; i < cinemaVector.size(); i++)
	{
		double koef = ( (double) cinemaVector.at(i).getSoldTickets() / (double) cinemaVector.at(i).getCapacity() ) * 100;

            cinemaMultimap.insert( pair<double, string>( koef ,cinemaVector.at(i).getFilmName() ) );

    }
    cout <<"Most Proftable screening  : % " << cinemaMultimap.begin()->first << " : " << cinemaMultimap.begin()->second<<endl;

}
void Cinema::searchByScreening(string name)		// task 7
{
	for (size_t i = 0; i < cinemaVector.size(); i++)
	{
	   if (name == cinemaVector.at(i).getFilmName())
	   {
		   cout << "Movie name : " << cinemaVector.at(i).getFilmName() << endl;
		   cout << "Hall name : " << cinemaVector.at(i).getHallName() << endl;
		   cout << "Sold tickets : " << cinemaVector.at(i).getSoldTickets() << endl;
		   cout << "Price per ticket : $" << cinemaVector.at(i).getPricePerTickets() << endl;
		   cout << endl;
	   }
	}
}
void searchByfilm(string)
{

}
double Cinema::turnoverCinema()
{
	double result = 0;

	for (size_t i = 0; i < cinemaVector.size(); i++)
	{
		result += cinemaVector.at(i).getPricePerTickets() * cinemaVector.at(i).getSoldTickets();
	}

	return  result;
}
int Cinema::soldTickets()
{
	int result = 0;

	for (size_t i = 0; i < cinemaVector.size(); i++)
	{
		cinemaMap[cinemaVector.at(i).getFilmName()] = cinemaVector.at(i).getSoldTickets();
	}

	map<string, int>::iterator itr;
	for (itr = cinemaMap.begin(); itr != cinemaMap.end(); itr++)
	{
		cout << itr->first << " - " << itr->second << endl;
		result += itr->second;
	}
	return  result;

}

Cinema function;
