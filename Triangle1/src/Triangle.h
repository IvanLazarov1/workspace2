#ifndef TRIANGLE_H_
#define TRIANGLE_H_

#include <iostream>
#include <iomanip>

using namespace std;

class Triangle {

	friend istream &operator >> (istream&, Triangle&);
	friend ostream &operator << (ostream&, const Triangle&);

public:

	Triangle(int x = 0, int y = 0, int z = 0, int h = 0);
	virtual ~Triangle();

	bool operator == (const Triangle &);
	bool operator != (const Triangle &);
	bool operator > (const Triangle &);
	bool operator < (const Triangle &);

	Triangle& operator - (Triangle&);
	Triangle& operator + (Triangle&);
	Triangle& operator * (Triangle&);
	Triangle& operator / (Triangle&);

	int getH() const;
	void setH(int h);

	int getX() const;
	void setX(int x);

	int getY() const;
	void setY(int y);

	int getZ() const;
	void setZ(int z);

private:

	int m_x;
	int m_y;
	int m_z;
	int m_h;

};


#endif /* TRIANGLE_H_ */
