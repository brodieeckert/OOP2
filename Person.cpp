#include <iostream>
#include "Person.h"

using namespace std;

int Person::getSalary(){
    return this->_salary;
}
string Person::getName(){
    return this->_name;
}

void Person::setSalary(int salary){
    this->_salary = salary;
}

void Person::setName(string name){
    this->_name = name;
}