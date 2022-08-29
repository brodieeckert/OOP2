#include <iostream>
#include "Person.h"
#include "Airplane.h"

using namespace std;

Airplane::Airplane(string callsign, Person thePilot, Person theCoPilot){
    _Pilot = thePilot;
    _CoPilot = theCoPilot;
    _callsign = callsign;
}
void Airplane::setPilot(Person thePilot){
    this->_Pilot = thePilot;
}
Person Airplane::getPilot(){
    return this->_Pilot;
}
void Airplane::setCoPilot(Person theCoPilot){
    this->_CoPilot = theCoPilot;
} 
Person Airplane::getCoPilot(){
    return this->_CoPilot;
}
void Airplane::printDetails(){

}
