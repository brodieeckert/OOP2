#include <iostream>
#include <string>
using namespace std;

class Person{
    private:
        int _salary;
        string _name;



    public:
        Person():Person(0,""){};
        Person(int mySalary, string myName);
        void setName(string myName);
        string getName();
        void setSalary(int mySalary);
        int getSalary();

};