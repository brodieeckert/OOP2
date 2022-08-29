#include <iostream>
#include <string>
#include "Person.h"

using namespace std;


int main(){
    Person a(1,"A");
    Person b(1,"B");
    Person c(1,"C");
    Person d(1,"D");

    cout << "Name and Salary: " << a.getName() << " " << a.getSalary() << endl;
    cout << "Name and Salary: " << b.getName() << " " << b.getSalary() << endl;
    cout << "Name and Salary: " << c.getName() << " " << c.getSalary() << endl;
    cout << "Name and Salary: " << d.getName() << " " << d.getSalary() << endl;

    
}