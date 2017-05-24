/*
 * BookStore.h
 *
 *  Created on: May 23, 2017
 *      Author: asdf
 */

#ifndef BOOKSTORE_H_
#define BOOKSTORE_H_

#include <string>

using namespace std;


class BookStore {

public:

	BookStore();
	virtual ~BookStore();

	const string& getAuthor() const;
	void setAuthor(const string& author);
	const string& getDescription() const;
	void setDescription(const string& description);
	const string& getGenre() const;
	void setGenre(const string& genre);
	double getPrice() const;
	void setPrice(double price);
	const string& getPublishDate() const;
	void setPublishDate(const string& publishDate);
	const string& getTitle() const;
	void setTitle(const string& title);

private:

	string m_author;
	string m_title;
	string m_genre;
	double m_price;
	string m_publish_date;
	string m_description;

};

#endif /* BOOKSTORE_H_ */
