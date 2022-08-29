#include <iostream>
#include <string>
using namespace std;

class Person{
    private:
        int _salary;
        string _name;

    public:

        Person();
        void setName(string PersonName);
        string getName();
        void setSalary(int personSalary);
        int getSalary();

};