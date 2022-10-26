#include "AirCraft.h"




AirCraft::AirCraft(){};
AirCraft::AirCraft(int w){
    this->weight = w;
}
void  AirCraft::refuel(){
    this->fuel = 100;
}               // Resets fuel back to 100%
void  AirCraft::set_fuel(float f){
    this->fuel = f;
} 
float  AirCraft::get_fuel(){
    return this->fuel;
}
void  AirCraft::set_weight(int w){
    this->weight = w;
}
int  AirCraft::get_weight(){
    return this->weight;
}
void  AirCraft::set_numberOfFlights(int n){
    this->numberOfFlights = n;
}
int  AirCraft::get_numberOfFlights(){
    return this->numberOfFlights;
}