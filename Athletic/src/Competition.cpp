/*
 * Comptetition.cpp
 *
 *  Created on: May 9, 2017
 *      Author: asdf
 */

#include "Competition.h"

using namespace std;

Competition::Competition() {
	// Auto-generated constructor stub

}

Competition::~Competition() {
	// Auto-generated destructor stub
}

void Competition::addStarts(string data, string hour, string type){

	Start temp(data, hour, type);
	m_starts.push_back(temp);

}

Competition competition1;
