#include <iostream>
#include <string>
using namespace std;

class Capybara{
    private:
        int _age;
        string _name;

    public:

        Capybara();
        void setName(string capyName);
        string getName();
        void setAge(int capyage);
        int getAge();

};