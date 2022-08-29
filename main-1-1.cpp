#include <iostream>
#include <string>
#include "Capybara.h"

using namespace std;


int main(){
    Capybara a;
    Capybara b;
    Capybara c;
    Capybara d;
    a.setAge(1);
    a.setName("A");
    b.setAge(2);
    b.setName("B");
    c.setAge(3);
    c.setName("C");
    d.setAge(4);
    d.setName("D");

    cout << "Name and age: " << a.getName() << " " << a.getAge() << endl;
    cout << "Name and age: " << b.getName() << " " << b.getAge() << endl;
    cout << "Name and age: " << c.getName() << " " << c.getAge() << endl;
    cout << "Name and age: " << d.getName() << " " << d.getAge() << endl;

    
}