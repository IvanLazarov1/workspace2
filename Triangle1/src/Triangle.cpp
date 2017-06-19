#include "Triangle.h"

using namespace std;

Triangle::Triangle(int x, int y, int z, int h) {

	setX(x);
	setY(y);
	setZ(z);
	setH(h);

}

Triangle::~Triangle() {

}

istream &operator >> (istream& input, Triangle& triangle){


	input >> setw(2) >> triangle.m_x; // x
	input.ignore(1);	              // -
	input >> setw(2) >> triangle.m_y; // y
	input.ignore(1); 	              // -
	input >> setw(2) >> triangle.m_z; // z
	input.ignore(1); 	              // -
	input >> setw(2) >> triangle.m_h; // h


	return input;
}

ostream &operator << (ostream& output, const Triangle& triangle){

	output << "=>" << triangle.m_x << "," << triangle.m_y << "," << triangle.m_z << "," << triangle.m_h;

	return output;
}

bool Triangle::operator!=(const Triangle &right) {
	return this->m_x != right.m_x && this->m_y != right.m_y && this->m_z != right.m_z && this->m_h != right.m_h;
}

bool Triangle::operator==(const Triangle &right) {
	return this->m_x == right.m_x && this->m_y == right.m_y && this->m_z == right.m_z && this->m_h == right.m_h;
}

int Triangle::getH() const {
	return m_h;
}

void Triangle::setH(int h) {
	m_h = h;
}

int Triangle::getX() const {
	return m_x;
}

void Triangle::setX(int x) {
	m_x = x;
}

int Triangle::getY() const {
	return m_y;
}

void Triangle::setY(int y) {
	m_y = y;
}

int Triangle::getZ() const {
	return m_z;
}

bool Triangle::operator >(const Triangle& right) {

	return this->m_x > right.m_x && this->m_y > right.m_y && this->m_z > right.m_z && this->m_h > right.m_h;

}

bool Triangle::operator <(const Triangle& right) {

	return this->m_x < right.m_x && this->m_y < right.m_y && this->m_z < right.m_z && this->m_h < right.m_h;

}

void Triangle::setZ(int z) {
	m_z = z;
}

Triangle& Triangle::operator -(Triangle& right) {

	int newX = this ->m_x - right.m_x;
	int newY = this ->m_y - right.m_y;
	int newZ = this ->m_z - right.m_z;
	int newH = this ->m_h - right.m_h;

	Triangle *result = new Triangle(newX, newY, newZ, newH);
	return *result;

}

Triangle& Triangle::operator +(Triangle& right) {

	int newX = this ->m_x + right.m_x;
	int newY = this ->m_y + right.m_y;
	int newZ = this ->m_z + right.m_z;
	int newH = this ->m_h + right.m_h;

	Triangle *result = new Triangle(newX, newY, newZ, newH);
	return *result;

}

Triangle& Triangle::operator *(Triangle& right) {

	int newX = this ->m_x * right.m_x;
	int newY = this ->m_y * right.m_y;
	int newZ = this ->m_z * right.m_z;
	int newH = this ->m_h * right.m_h;

	Triangle *result = new Triangle(newX, newY, newZ, newH);
	return *result;

}

Triangle& Triangle::operator /(Triangle& right) {

	int newX = this ->m_x / right.m_x;
	int newY = this ->m_y / right.m_y;
	int newZ = this ->m_z / right.m_z;
	int newH = this ->m_h / right.m_h;

	Triangle *result = new Triangle(newX, newY, newZ, newH);
	return *result;

}
