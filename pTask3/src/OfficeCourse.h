#ifndef OFFICECOURSE_H_
#define OFFICECOURSE_H_

#include "Course.h"
#include <iostream>

using namespace std;

class OfficeCourse : public Course {

public:

	OfficeCourse(string name = "", int number = 0, int duration = 0, double basePrice = 0.0,
			int level = 0, string address = "", int hall = 0, int type = 0);
	virtual ~OfficeCourse();

	const string& getAddress() const;
	void setAddress(const string& address);

	int getHall() const;
	void setHall(int hall);

	int getLevel() const;
	void setLevel(int level);

	int getType() const;
	void setType(int type);

	void calculatePrice();

	void printInfo();

private:

	int m_level;
	string m_address;
	int m_hall;
	int m_type;

};

#endif /* OFFICECOURSE_H_ */
