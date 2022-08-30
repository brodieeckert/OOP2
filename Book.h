#include <string>

using namespace std;


class Book{
    protected:
        string _Title;
        string _Author;
        int _Pages;
        int _copies;
        
    public:
        Book();
        Book(string _Title, string _Author, int _Pages, int _copies);
        int getCopies();
        void setCopies(int copies);
        void bborrow();
        void breturn();
        string getTitle();
};
