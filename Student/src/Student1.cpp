/*
 * Student1.cpp
 *
 *  Created on: Apr 19, 2017
 *      Author: asdf
 */

#include "Student1.h"
#include "Adress.h"
#include <iostream>
using namespace std;


Student1::Student1(string name, string spec, class Adress& adress): Adress(adress) {

	setName(name);
	setSpec(spec);


}

Student1::~Student1() {
	//  Auto-generated destructor stub
}

void Student1::setName(string name){
	this->name = name;
}
void Student1::setSpec(string spec){
	this->spec = spec;
}


string Student1::getName(){
	return name;
}
string Student1::getSpec(){
	return spec;
}


void Student1::print(){

	cout << getName() << endl;
	cout << getSpec() << endl;
	Adress.print();

}
