#include "Door.h"

using namespace std;

Door::Door(double length, double height, double width, string color) {

	setLength(length);
	setHeight(height);
	setWidth(width);
	setColor(color);

}

Door::~Door() {
	//Auto-generated destructor stub
}

const string& Door::getColor() const {
	return m_color;
}

void Door::setColor(const string& color) {
	m_color = color;
}

double Door::getHeight() const {
	return m_height;
}

void Door::setHeight(double height) {
	if (height > 2.00 && height < 3.50){
		m_height = height;
	}else {}
}

double Door::getLength() const {
	return m_length;
}

void Door::setLength(double length) {
	if (length > 0.9 && length < 2.00){
		m_length = length;
	}else{
		cout << "wrong input";
	}
}

double Door::getWidth() const {
	return m_width;
}

void Door::setWidth(double width) {
	m_width = width;
}

istream &operator >> (istream& input, Door& door){

	input >> setw(3) >> door.m_length;
	input.ignore(1);
	input >> setw(3) >> door.m_height;
	input.ignore(1);
	input >> setw(3) >> door.m_width;
	input.ignore(1);
	input >> setw(3) >> door.m_color;

	return input;

}

ostream &operator << (ostream& output, const Door& door){

	output << "door=>" << door.m_length << " x " << door.m_height << " x " << door.m_width << " : " << door.m_color;

	return output;
}

Door& Door::operator +(Door& right) {

	double newLength = this ->m_length + right.m_length;
	double newHeight = this ->m_height + right.m_height;
	double newWidth = this ->m_width + right.m_width;
	string newColor = this->m_color;

	Door *result = new Door(newLength, newHeight, newWidth, newColor);
	return *result;
}

bool Door::operator ==(const Door& right) {

	return this->m_length == right.m_length && this->m_height == right.m_height && this->m_width == right.m_width;

}

bool Door::operator >(const Door& right) {

	return this->m_length > right.m_length && this->m_height > right.m_height && this->m_width > right.m_width;

}

bool Door::operator <(const Door& right) {

	return this->m_length < right.m_length && this->m_height < right.m_height && this->m_width < right.m_width;

}
