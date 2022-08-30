#include <iostream>
#include <string>
#include "person.h"

using namespace std;

class Airplane{
    private:
        string _callsign;
        Person _CoPilot;
        Person _Pilot;



    public:
        Airplane(string callsign, Person thePilot, Person theCoPilot);
        void setPilot(Person thePilot);
        Person getPilot();
        void setCoPilot(Person theCoPilot); 
        Person getCoPilot();
        void printDetails(); 
};