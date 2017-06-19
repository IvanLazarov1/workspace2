#include "RationalNumber.h"
#include <iostream>

using namespace std;

RationalNumber::RationalNumber(int chislitel, int znamenatel) {

	if (chislitel <= 0 && znamenatel <=0){

		chislitel = 1;
		znamenatel = 1;

	}

	m_chislitel = chislitel;
	m_znamenatel = znamenatel;

}

RationalNumber::~RationalNumber() {
	// Auto-generated destructor stub
}

int RationalNumber::getChislitel() const {

	return m_chislitel;

}

void RationalNumber::setChislitel(int chislitel) {

	if (chislitel <= 0){
		chislitel = 1;
	}
	m_chislitel = chislitel;

}

int RationalNumber::getZnamenatel() const {

	return m_znamenatel;

}

void RationalNumber::setZnamenatel(int znamenatel) {

	if (znamenatel <= 0){
			znamenatel = 1;
		}
	m_znamenatel = znamenatel;

}

istream &operator >> (istream& input, RationalNumber& drob){

	input >> drob.m_chislitel ;
	input.ignore(1);
	input >> drob.m_znamenatel;

	return input;
}

ostream &operator << (ostream& output, const RationalNumber& drob){

	output << drob.m_chislitel << "/" << drob.m_znamenatel;

	return output;

}

RationalNumber& RationalNumber::operator +(RationalNumber& right) {

	int newChislitel = right.m_znamenatel * this->m_chislitel + right.m_chislitel * this->m_znamenatel;
	int newZnamenatel = this->m_znamenatel * right.m_znamenatel;
	RationalNumber *result = new RationalNumber(newChislitel, newZnamenatel);

	return *result;
}

RationalNumber& RationalNumber::operator -(RationalNumber& right) {

	int newChislitel = right.m_znamenatel * this->m_chislitel - right.m_chislitel * this->m_znamenatel;
		int newZnamenatel = this->m_znamenatel * right.m_znamenatel;
		RationalNumber *result = new RationalNumber(newChislitel, newZnamenatel);

		return *result;

}

RationalNumber& RationalNumber::operator *(RationalNumber& right) {

	int newChislitel = this->m_chislitel * right.m_chislitel;
	int newZnamenatel = this->m_znamenatel * right.m_znamenatel;
	RationalNumber *result = new RationalNumber(newChislitel, newZnamenatel);

	return *result;
}

RationalNumber& RationalNumber::operator /(RationalNumber& right) {

	int newChislitel = this->m_chislitel * right.m_znamenatel;
	int newZnamenatel = right.m_chislitel * this->m_znamenatel;
	RationalNumber *result = new RationalNumber(newChislitel, newZnamenatel);

	return *result;
}

bool RationalNumber::operator ==(const RationalNumber& right) const {

	return m_chislitel == right.m_chislitel && m_znamenatel == right.m_znamenatel;

}

bool RationalNumber::operator !=(const RationalNumber& right) const {

	return m_chislitel != right.m_chislitel && m_znamenatel != right.m_znamenatel;

}
