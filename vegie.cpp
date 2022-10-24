#include <string.h>
#include <iostream>
#include "animal.h"
#include "vegie.h"

int vegie::nextID = 100;

vegie::vegie(string n, int v){
    this->animalID = nextID;
    this->volume = v;
    this->name = n;
    this->favourite_food = "grass";
    this->nextID++;

}  // create a hunter with name n and body volume v
string vegie::get_favourite_food(){
    return this->favourite_food;
}

void vegie::set_favourite_food(string f){
    this->favourite_food=f;
}

string vegie::get_name(){
    return "Safe: " + this->name; 
}
