#ifndef DROB_H_
#define DROB_H_
#include <istream>
#include <ostream>
using namespace std;




class Drob {

friend istream &operator >> (istream&, Drob&);
friend ostream &operator << (ostream&, const Drob&);

public:

	Drob(int chislitel = 1, int znamenatel = 1);
	virtual ~Drob();

	void setChislitel(int chislitel);
	void setZnamenatel(int znamenatel);

	int getChislitel ();
	int getZnamenatel();

	Drob& operator - (Drob&);
	Drob& operator + (Drob&);
	Drob& operator * (Drob&);
	Drob& operator / (Drob&);

private:

	int m_chislitel;
	int m_znamenatel;

};


#endif /* DROB_H_ */
