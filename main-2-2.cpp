#include <iostream>
#include <string>
#include "Person.h"
#include "Airplane.h"

using namespace std;




int main(){
    Person a(20,"A");
    Person b(30,"B");
    Person c(40,"C");
    Airplane A("SENDY",a,b);

    A.printDetails();

    A.setPilot(c);
    A.setCoPilot(a);

    A.printDetails();
}