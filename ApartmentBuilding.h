#ifndef "Unit.h"
#include "Unit.h"

class ApartmentBuilding
{
private:
    int capacity;
    int units;
    Unit* rooms = new Unit[capacity];
public:
    ApartmentBuilding(int capacity);    
    ApartmentBuilding(int capacity);
    int get_capacity();
    int get_current_number_of_units(); 
    Unit * get_contents();
    bool add_unit(Unit unit);
    ~ApartmentBuilding();

};

#endif