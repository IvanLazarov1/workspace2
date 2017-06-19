#ifndef RATIONALNUMBER_H_
#define RATIONALNUMBER_H

#include <iostream>

using namespace std;

class RationalNumber {

	friend istream &operator >> (istream&, RationalNumber&);
	friend ostream &operator << (ostream&, const RationalNumber&);

public:

	RationalNumber(int chislitel = 1, int znamenatel = 1);
	virtual ~RationalNumber();

	int getChislitel() const;
	void setChislitel(int chislitel);
	int getZnamenatel() const;
	void setZnamenatel(int znamenatel);

	RationalNumber& operator+(RationalNumber&);
	RationalNumber& operator-(RationalNumber&);
	RationalNumber& operator*(RationalNumber&);
	RationalNumber& operator/(RationalNumber&);
	bool operator==( const RationalNumber & ) const;
	bool operator!=( const RationalNumber & ) const;


private:

	int m_chislitel;
	int m_znamenatel;

};

#endif /* RATIONALNUMBER_H_ */
