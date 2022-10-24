#include <string.h>
#include <iostream>
#include "animal.h"
#include "hunter.h"

int hunter::nextID = 1000;

hunter::hunter(string n, int v){
    this->animalID = nextID;
    this->volume = v;
    this->name = n;
    this->kills = 0;
    this->nextID++;

}  // create a hunter with name n and body volume v
int hunter::get_kills(){
    return this->kills;
}

void hunter::set_kills(int k){
    this->kills=k;
}

string hunter::get_name(){
    return "Hunter:" + this->name; 
}