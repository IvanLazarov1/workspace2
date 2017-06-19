#include "Athlets.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

Athlets::Athlets(string fName, string lName, string country, double bestOf, string disciplineName){

    m_fName   = fName;
    m_lName   = lName;
    m_country = country;
    m_bestOf  = bestOf;
    m_disciplineName = disciplineName;
}

Athlets::~Athlets(){

}

void Athlets::setFName(string fName){
    m_fName = fName;
}
void Athlets::setLName(string lName){
    m_lName = lName;
}
void Athlets::setCountry(string country){
    m_country = country;
}
void Athlets::setBestOf(double bestOf){
    m_bestOf = bestOf;
}

string Athlets::getFName(){
    return  m_fName;
}
string Athlets::getLName(){
    return m_lName;
}
string Athlets::getCountry(){
    return  m_country;
    }
double Athlets::getBestOf(){
    return m_bestOf;
}

void Athlets::printInfo(){

    cout << m_fName << endl ;
    cout << m_lName << endl ;
    cout << m_country << endl ;
    cout << m_bestOf << endl ;

}

string Athlets::getDisciplineName() {
	return m_disciplineName;
}

void Athlets::setDisciplineName(string disciplineName) {
	m_disciplineName = disciplineName;
}
