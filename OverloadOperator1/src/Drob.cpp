/*
 * Drob.cpp
 *
 *  Created on: May 3, 2017
 *      Author: asdf
 */

#include "Drob.h"
#include <iostream>
#include <iomanip>
using namespace std;

Drob::Drob(int chislitel, int znamenatel) {

	m_chislitel = chislitel;
	m_znamenatel = znamenatel;

}

Drob::~Drob() {
	// Auto-generated destructor stub
}

void Drob::setChislitel(int chislitel){
	m_chislitel = chislitel;
}

void Drob::setZnamenatel(int znamenatel){
	m_znamenatel = znamenatel;
}

int Drob::getChislitel (){
	return m_chislitel;
}

int Drob::getZnamenatel(){
	return m_znamenatel;
}

istream &operator >> (istream& input, Drob& drob){

	input >> drob.m_chislitel ;
	input.ignore(1);
	input >> drob.m_znamenatel;

//	input >> setw(2) >> drob.m_chislitel;
//	input.ignore(1);
//	input >> setw(3) >> drob.m_znamenatel;

	return input;
}

ostream &operator << (ostream& output, const Drob& drob){
	output << drob.m_chislitel << "/" << drob.m_znamenatel;
	return output;
}

Drob& Drob::operator -(Drob& right) {

	int newNom = this ->m_chislitel - right.m_chislitel;
	int newDenom = this ->m_znamenatel - right.m_znamenatel;
	Drob *result = new Drob(newNom, newDenom);
	return *result;

}

Drob& Drob::operator +(Drob& right) {

	int newNom = this ->m_chislitel + right.m_chislitel;
	int newDenom = this ->m_znamenatel + right.m_znamenatel;
	Drob *result = new Drob(newNom, newDenom);
	return *result;

}

Drob& Drob::operator *(Drob& right) {

	int newNom = this ->m_chislitel * right.m_chislitel;
	int newDenom = this ->m_znamenatel * right.m_znamenatel;
	Drob *result = new Drob(newNom, newDenom);
	return *result;

}

Drob& Drob::operator /(Drob& right) {

	int newNom = this ->m_chislitel / right.m_chislitel;
	int newDenom = this ->m_znamenatel / right.m_znamenatel;
	Drob *result = new Drob(newNom, newDenom);
	return *result;

}
