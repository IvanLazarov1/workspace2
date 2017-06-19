#ifndef OPERATIONS_H_
#define OPERATIONS_H_

#include <iostream>
#include "pugixml.hpp"
#include "BookStore.h"
#include <string>
#include <vector>
#include <iomanip>
#include <fstream>
#include <cstdlib>

using namespace std;

class Operations {

public:

	Operations();
	virtual ~Operations();

	void readFromXmlFile();
	void modify();
	void WriteNewXmlFile();
	void readFromXmlFileWriteToTxtFile();
	void searchInXmlByAttrValue();
	void readBooksTitle();


};

extern Operations operation;

#endif /* OPERATIONS_H_ */
