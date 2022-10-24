#include "animal.h"




animal::animal(string n, int v)
{
    this->name = n;
    this->volume = v;
}

animal::animal()
{
    this->name = "No Name";
    this->volume = 0;
}

int animal::get_animalID(){
    return this->animalID;

}

int animal::get_volume(){
    return this->volume;
}

void animal::set_name(string name){
    this->name = name;
}

void animal::set_volume(int volume){
    this->volume = volume;
}
