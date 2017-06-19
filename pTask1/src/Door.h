#ifndef DOOR_H_
#define DOOR_H_

#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

class Door {

	friend istream &operator >> (istream&, Door&);
	friend ostream &operator << (ostream&, const Door&);

public:

	Door(double length = 0, double height = 0, double width = 0, string color = "");
	virtual ~Door();

	Door& operator + (Door&);
	bool operator == (const Door&);
	bool operator > (const Door&);
	bool operator < (const Door&);

	const string& getColor() const;
	void setColor(const string& color);

	double getHeight() const;
	void setHeight(double height);

	double getLength() const;
	void setLength(double length);

	double getWidth() const;
	void setWidth(double width);

private:

	double m_length;
	double m_height;
	double m_width;
	string m_color;

};

#endif /* DOOR_H_ */
