#ifndef COMPETITION_H_
#define COMPETITION_H_

#include "Start.h"

using namespace std;


class Competition : public Start {

public:

	Competition();
	virtual ~Competition();

	void addStarts(string data = "" , string hour = "" , string type = "");

private:

	vector<Start> m_starts;

};

extern Competition competition1;

#endif /* COMPETITION_H_ */
