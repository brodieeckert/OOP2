#ifndef AprtmentBuilding.H
#define AprtmentBuilding.H
#include "Unit.h"

#include <string>
#include <iostream>

class ApartmentBuilding
{
private:
    int capacity;
    int units;
    Unit* rooms = new Unit[capacity];
public:
    ApartmentBuilding();    
    ApartmentBuilding(int capacity);
    int get_capacity();
    int get_current_number_of_units(); 
    Unit * get_contents();
    bool add_unit(Unit unit);
    ~ApartmentBuilding();

};

#endif