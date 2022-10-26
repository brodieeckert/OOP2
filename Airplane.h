
#ifndef AIRPLANE_H
#define AIRPLANE_H
#include "AirCraft.h"


class Airplane : public AirCraft
{
private:
    int numPassengers;               // number of passengers on the Airplane
public:
    Airplane(/* args */);
    Airplane(int w, int p);           // Create Airplane with weight w and passengers p
    void reducePassengers(int x);     // reduce passenger list by x
    int get_numPassengers();
    void fly(int headwind, int minutes);         // headwind in km/h and minutes (time flying)


};

#endif

