#include <string>
#include "Book.h"
using namespace std;


class Library: public Book{
    private:
        Book uniqbooks[5];

    public:
        Library();
        Library(Book uniqboook);
        void breturn(Book book);
        void bborrow(Book book);
};
