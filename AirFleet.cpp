#include "AirFleet.h"

void AirFleet::addAirCraft(AirCraft *aircraft){
    this->fleet[this->count] = aircraft;
    this->count++;

}      // Adds a AirCraft to the fleet
AirCraft ** AirFleet::get_fleet(){
    return this->fleet;

}           // Returns the array of pointers to the five AirCraft objects
int AirFleet::get_count(){
    return this->count;

}                 // Returns the amount of AirCrafts added to the fleet
AirFleet* AirFleet::createFleet(int authority){
    if(authority == 10){
        AirFleet*  newfleet = new AirFleet;
        return newfleet;
    }
    return nullptr;
}

AirFleet::AirFleet(){
    this->fleet = new AirCraft*[5];
}