#include <iostream>
#include <string>
#include "Person.h"
#include "Airplane.h"

using namespace std;




int main(){
    Person a(1,"A");
    Person b(1,"B");
    Person c(1,"C");
    Airplane A("SENDY",a,b);
    A.setCoPilot(a);
    A.setPilot(c);

    A.printDetails();
    
}