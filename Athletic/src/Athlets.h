#ifndef Athletes_h
#define Athletes_h

#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Athlets{

public:

    Athlets(string fName = "", string lName="", string country="", double bestOf= 0, string disciplineName = "");
    virtual ~Athlets();

    void setFName(string);
    void setLName(string);
    void setCountry(string);
    void setDiscipline(string);
    void setBestOf(double);

    string getFName();
    string getLName();
    string getCountry();
    double getBestOf();
    void  printInfo();
	string getDisciplineName();
	void setDisciplineName(string disciplineName);

private:
    string m_fName;
    string m_lName;
    string m_country;
    string m_disciplineName;
    double m_bestOf;
};


#endif /* Athlets_h */
