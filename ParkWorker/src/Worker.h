#ifndef WORKER_H_
#define WORKER_H_

#include <string>

using namespace std;

class Worker {

public:

	Worker(string firstName = "", string secondName = "", string lastName = "", size_t egn = 0,
			string address = "", size_t phone = 0, string gender = "");

	virtual ~Worker();

	const string& getAddress() const;
	void setAddress(const string& address);
	size_t getEgn() const;
	void setEgn(size_t egn);
	const string& getFirstName() const;
	void setFirstName(const string& firstName);
	const string& getGender() const;
	void setGender(const string& gender);
	const string& getLastName() const;
	void setLastName(const string& lastName);
	size_t getPhone() const;
	void setPhone(size_t phone);
	const string& getSecondName() const;
	void setSecondName(const string& secondName);

private:

	string m_firstName;
	string m_secondName;
	string m_lastName;
	size_t m_egn;
	string m_address;
	size_t m_phone;
	string m_gender;

};

#endif /* WORKER_H_ */
