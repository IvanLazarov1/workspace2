#include <iostream>
#include "Library.h"
#include <string>
#include <vector>
#include "Autor.h"
#include "Book.h"

using namespace std;

int main(){

    Autor autor1("ivan" , "ivanov" ,"bg");
    Library library1;
    library1.addBook("alisa", "detski", 1989, "1", autor1);
    library1.addBook("alisa1", "klasica", 1989, "1", autor1);
    library1.addBook("alisa2", "fantastika", 1989, "3", autor1);
    library1.addBook("alisa3", "biografichen", 1989, "4", autor1);
    library1.addBook("alisa4", "luboven", 1989, "5", autor1);
    library1.addBook("alisa5", "luboven", 1989, "6", autor1);
    library1.showBooks();
    library1.searchByName("alisa4");
    library1.statisticByGenre();



    return 0;
}
