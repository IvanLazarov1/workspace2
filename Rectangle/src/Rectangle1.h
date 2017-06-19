/*
 * Rectangle1.h
 *
 *  Created on: Apr 18, 2017
 *      Author: asdf
 */

#ifndef RECTANGLE1_H_
#define RECTANGLE1_H_

using namespace std;

/*
 *
 */
class Rectangle1 {
public:

	Rectangle1(int x1,int x2,int x3 ,int x4,int y1,int y2,int y3,int y4);

	void setRectangle(int,int,int,int,int,int,int,int);

	int calculateLenght();
	int calculateWidth();
	int perimeter();
	int area();

	virtual ~Rectangle1();

private:

	int x1;
	int x2;
	int x3;
	int x4;

	int y1;
	int y2;
	int y3;
	int y4;

};



#endif /* RECTANGLE1_H_ */
