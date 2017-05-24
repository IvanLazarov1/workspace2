/*
 * BookStore.cpp
 *
 *  Created on: May 23, 2017
 *      Author: asdf
 */

#include "BookStore.h"

using namespace std;

BookStore::BookStore() {
	// Auto-generated constructor stub

}

BookStore::~BookStore() {
	// Auto-generated destructor stub
}

const string& BookStore::getAuthor() const {
	return m_author;
}

void BookStore::setAuthor(const string& author) {
	m_author = author;
}

const string& BookStore::getDescription() const {
	return m_description;
}

void BookStore::setDescription(const string& description) {
	m_description = description;
}

const string& BookStore::getGenre() const {
	return m_genre;
}

void BookStore::setGenre(const string& genre) {
	m_genre = genre;
}

double BookStore::getPrice() const {
	return m_price;
}

void BookStore::setPrice(double price) {
	m_price = price;
}

const string& BookStore::getPublishDate() const {
	return m_publish_date;
}

void BookStore::setPublishDate(const string& publishDate) {
	m_publish_date = publishDate;
}

const string& BookStore::getTitle() const {
	return m_title;
}

void BookStore::setTitle(const string& title) {
	m_title = title;
}
