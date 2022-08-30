#include <iostream>
#include "Library.h"

using namespace std;


Library::Library(){

}
void breturn(Book book){
    if(book.getCopies() > 0){
        book.setCopies(book.getCopies()-1);
    }
    else{
        cout << "No more copies of " << book.getTitle() << endl;
    }
}
void bborrow(Book book){
    book.setCopies(book.getCopies()+1);
}
