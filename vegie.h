#ifndef VEGIE_H
#define VEGIE_H

#include <string.h>
#include <iostream>
#include "animal.h"
using namespace std;


class vegie : public animal
{
private:
    string favourite_food ;               // how many kills have been recorded, initialised to 0
    static int nextID ; 
public:
    vegie(/* args */);
    string get_favourite_food();
    void set_favourite_food(string f);
    string get_name();
    vegie(string n, int v);  // create a hunter with name n and body volume v

};


#endif