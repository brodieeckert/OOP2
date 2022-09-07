#include "ApartmentBuilding.h"
#include "unit.h"

ApartmentBuilding::ApartmentBuilding(){
    this->capacity = 0;
};    
ApartmentBuilding::ApartmentBuilding(int capacity){
    this->capacity = capacity;
}
int ApartmentBuilding::get_capacity(){
    return capacity;
}
int ApartmentBuilding::get_current_number_of_units(){
    return this->units;
}
Unit * ApartmentBuilding::get_contents(){
    return this->rooms;
}
bool ApartmentBuilding::add_unit(Unit unit){
    if(this->units<this->capacity){
        this->rooms[units] = unit;
        this->units++;
        return true;
    }
    return false;
}

ApartmentBuilding::~ApartmentBuilding()
{
}

