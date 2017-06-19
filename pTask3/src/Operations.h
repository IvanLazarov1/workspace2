#ifndef OPERATIONS_H_
#define OPERATIONS_H_

#include <vector>
#include <iostream>
#include "Course.h"
#include "OfficeCourse.h"
#include "OnlineCourse.h"

using namespace std;

class Operations {

public:

	Operations();
	virtual ~Operations();

	void addCourse(Course&);
	void printInfo();

private:

	vector<Course*> m_courses;

};



#endif /* OPERATIONS_H_ */
