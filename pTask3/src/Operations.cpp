#include "Operations.h"

using namespace std;

Operations::Operations() {
	// Auto-generated constructor stub

}

Operations::~Operations() {
	// Auto-generated destructor stub
}

void Operations::addCourse(Course& course){

	m_courses.push_back(&course);

}

void Operations::printInfo() {

	for (size_t i = 0; i < m_courses.size(); i++) {

		cout << m_courses.at(i)->getName();
		cout << m_courses.at(i)->getDuration();

		if (dynamic_cast<OfficeCourse*>(m_courses.at(i))) {
			m_courses.at(i)->printInfo();
		}

	}
}
