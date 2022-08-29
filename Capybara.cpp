#include <iostream>
#include "Capybara.h"

using namespace std;

Capybara::Capybara()
{
    _name = "?";
    _age = 0;
}

int Capybara::getAge(){
    return this->_age;
}
string Capybara::getName(){
    return this->_name;
}

void Capybara::setAge(int age){
    this->_age = age;
}

void Capybara::setName(string name){
    this->_name = name;
}