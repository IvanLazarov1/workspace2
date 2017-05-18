#ifndef OPERATIONS_H_
#define OPERATIONS_H_

#include <string>
#include "Address.h"
#include "Package.h"

using namespace std;


class Operations {

public:

	Operations();
	virtual ~Operations();

	void searchClient(Package&, string name = "");




};

extern Operations operation;

#endif /* OPERATIONS_H_ */
