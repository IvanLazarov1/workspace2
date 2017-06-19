#include "Start.h"
#include <iostream>
#include <vector>
#include <string>
#include "Athlets.h"
#include "Disciplines.h"

using namespace std;

Start::Start(string data  , string hour  , string type){

    m_data = data;
    m_hour = hour;
    m_type = type;

}

Start::~Start(){

}

void Start::setData(string data){
    m_data = data;
}

void Start::setHour(string hour){
    m_hour = hour;
}

void Start::setType(string type){
    m_type = type;
}

string Start::getData(){
    return m_data;
}

string Start::getHour(){
    return m_hour;
}

string Start::getType(){
    return m_type;
}

void  Start::addAthlet(string fName, string lName, string country, double bestOf, string disciplineName){

    Athlets temp(fName, lName, country, bestOf, disciplineName);
    m_athletes.push_back(temp);

}

//void Start::setDiscipline(string disciplineName, double worldRecord, double recordOfTheRace){
//
//    m_discipline.setDisciplineName(disciplineName);
//    m_discipline.setWorldRecord(worldRecord);
//    m_discipline.setRecordOfTheRace(recordOfTheRace);
//
//}

void Start::disciplineWinner(){

    double best = m_athletes.at(0).getBestOf();
    size_t index = 0;
    for (size_t i = 1; i < m_athletes.size(); i++) {
        if (m_athletes.at(i).getBestOf() < best) {
            best = m_athletes.at(i).getBestOf();
            index = i;
        }
    }

    cout << "Winner is : " <<endl;
    m_athletes.at(index).printInfo();

}

void Start::searchByDiscipline(string disciplineName) {

	for (size_t i = 0 ; i < m_athletes.size(); i++) {
	        if (m_athletes.at(i).getDisciplineName() == disciplineName) {
	            m_athletes.at(i).printInfo();
	        }
	        else{
	            cout << "athlet not found " << endl ;
	        }

	    }

}

void Start::searchAthlet(string name){

	bool found = false;

    for (size_t i = 0 ; i < m_athletes.size(); i++) {
        if (m_athletes.at(i).getFName() == name) {
            m_athletes.at(i).printInfo();
            found = true;
        }
    }

	if (!found)
	{
		cout << "Athlet not found!" <<endl;
	}

}

void Start::addDisciplines(string disciplineName, double worldRecord,
		double recordOfTheRace) {

	Disciplines temp(disciplineName, worldRecord, recordOfTheRace);
		    m_discipline.push_back(temp);

}

void Start::searchDiscipline(string disciplineName) {



	for (size_t i = 0 ; i < m_discipline.size(); i++) {
	        if (m_discipline.at(i).getDisciplineName() == disciplineName) {
	        	m_discipline.at(i).disciplineInfo();

	        }
	    }
}
