#ifndef MAKER_H_
#define MAKER_H_
#include <string>
using namespace std;


class Maker {

public:

	Maker(string name = "", int code = 0, string country = "");
	virtual ~Maker();

	int getCode() const;
	void setCode(int code);
	const string& getCountry() const;
	void setCountry(const string& country);
	const string& getName() const;
	void setName(const string& name);

private:

	string m_name;
	int m_code;
	string m_country;

};

#endif /* MAKER_H_ */
