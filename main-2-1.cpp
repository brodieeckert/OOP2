#include <iostream>
#include <string>
#include "Wagon.h"

int main(){
    Wagon A;
    Capybara a;
    Capybara b;
    Capybara c;
    Capybara d;
    Capybara e;
    a.setAge(1);
    a.setName("A");
    b.setAge(2);
    b.setName("B");
    c.setAge(3);
    c.setName("C");
    d.setAge(4);
    d.setName("D");
    e.setAge(5);
    e.setName("E");

    A.addCapybara(a);
    A.addCapybara(b);
    A.addCapybara(c);
    A.addCapybara(d);
    A.addCapybara(e);

    return 0;
}