#ifndef Library_h
#define Library_h

#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include "Book.h"

using namespace std;

class Library{

public:

    Library();

    void addBook(string name , string genre , int year , string isbn ,Autor& autors);
    void searchByName(string name);
    void statisticByGenre();
    void showBooks();


private:
    vector<Book> books;

};

#endif /* Library_h */
