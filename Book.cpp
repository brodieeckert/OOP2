#include <iostream>
#include "Library.h"
using namespace std;

Book::Book(){
    _Title = "No Title";
    _Author = "No Author";
    _Pages = 0;
    _copies = 0;
}
Book::Book(string Title, string Author, int Pages, int copies):_Title(Title),_Author(Author),_Pages(Pages),_copies(copies){

}
int Book::getCopies(){
    return this->_copies;
}
void Book::setCopies(int copies){
    _copies = copies;
}
string Book::getTitle(){
    return this->_Title;
}