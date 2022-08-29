#include <iostream>
#include <string>
#include "Person.h"

using namespace std;


int main(){
    Person a;
    Person b;
    Person c;
    Person d;
    a.setSalary(1);
    a.setName("A");
    b.setSalary(2);
    b.setName("B");
    c.setSalary(3);
    c.setName("C");
    d.setSalary(4);
    d.setName("D");

    cout << "Name and Salary: " << a.getName() << " " << a.getSalary() << endl;
    cout << "Name and Salary: " << b.getName() << " " << b.getSalary() << endl;
    cout << "Name and Salary: " << c.getName() << " " << c.getSalary() << endl;
    cout << "Name and Salary: " << d.getName() << " " << d.getSalary() << endl;

    
}