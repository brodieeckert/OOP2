#ifndef AIRFLEET_H
#define AIRFLEET_H
#include "AirCraft.h"

class AirFleet
{
private:
    AirCraft** fleet;
    int count;
    AirFleet(/* args */);
public:

    void addAirCraft(AirCraft *aircraft);       // Adds a AirCraft to the fleet
    AirCraft **get_fleet();           // Returns the array of pointers to the five AirCraft objects
    int get_count();                  // Returns the amount of AirCrafts added to the fleet
    static AirFleet* createFleet(int authority);
};

#endif