//============================================================================
// Name        : BooksXml.cpp
// Author      : ty
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "pugixml.hpp"
#include "BookStore.h"
#include "Operations.h"
#include <string>
#include <vector>

using namespace std;

int main() {

//	operation.readFromXmlFile();
//	operation.modify();
//	operation.WriteNewXmlFile();
	operation.readFromXmlFileWriteToTxtFile();
//	operation.searchInXmlByAttrValue();
//	operation.readBooksTitle();

	return 0;
}
