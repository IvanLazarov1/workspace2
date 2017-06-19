#include "Book.h"
#include <string>
#include <vector>
#include <iostream>
#include "Autor.h"

using namespace std;

Book::Book(){}
Book::Book(string name , string genre , int year ,string isbn  , class Autor& autors):autors(autors){

    m_name = name;
    m_genre = genre;
    m_year = year;
    m_isbn = isbn;


}

Book::~Book(){}

void Book::setName(string name){
    m_name = name;
}
void Book::setGenre(string genre){
    m_genre = genre;
}
void Book::setYear(int year){
    m_year = year;
}
void Book::setIsbn(string isbn){
   m_isbn = isbn;

}

string Book::getName(){
    return m_name;
}
string Book::getGenre(){
    return m_genre;
}
int Book::getYear(){
    return m_year;
}
string Book::getIsbn(){
    return  m_isbn;
}


void Book::printInfo(){
    cout << getName()<< " "<< getGenre()<< " "<< getYear()<<" "<<getIsbn()<<endl;

}
