#include "OnlineCourse.h"

using namespace std;

OnlineCourse::OnlineCourse(string name, int number, int duration, double basePrice, int type, string hour) {

	setType(type);
	setHour(hour);

}

OnlineCourse::~OnlineCourse() {
	//Auto-generated destructor stub
}

void OnlineCourse::calculatePrice() {



}

const string& OnlineCourse::getHour() const {
return m_hour;
}

void OnlineCourse::setHour(const string& hour) {
m_hour = hour;
}

int OnlineCourse::getType() const {
return m_type;
}

void OnlineCourse::setType(int type) {
m_type = type;
}

void OnlineCourse::printInfo() {

	cout << "Course name : " << getName();
	cout << "Course number : " << getNumber();
	cout << "Course duration : " << getDuration();
	cout << "Course base price : " << getBasePrice();
	cout << "Course type : " << getType();
	cout << "Course hour : " << getHour();

}
