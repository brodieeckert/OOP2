#ifndef HELICOPTER_H
#define HELICOPTER_H

#include <iostream>
#include <string>
#include "AirCraft.h"
using namespace std;

class Helicopter : public AirCraft
{
private:
    static int heliID;
    string name;                    // name of the Helicopter
    int craftID;
public:
    Helicopter();
    Helicopter(int w, string n);     // creates a Helicopter with weight w and name n
    int get_craftID();
    void set_craftID(int c);
    string get_name();
    void set_name(string n);

    void fly(int headwind, int minutes);         // headwind in km/h and minutes (time flying)

};

#endif