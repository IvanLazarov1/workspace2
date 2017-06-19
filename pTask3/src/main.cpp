#include <iostream>
#include "OfficeCourse.h"
#include "OnlineCourse.h"
#include "Operations.h"

using namespace std;

int main() {

	Operations operation;

	OfficeCourse office1("C++", 1, 3, 500, 15, "Liulin", 1, 3);
	OnlineCourse online1("Java", 2, 3,  400,  5, "9:30");

	operation.addCourse(office1);
	operation.addCourse(online1);

	operation.printInfo();

	return 0;

}
