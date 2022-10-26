#include "AirCraft.h"




AirCraft::AirCraft(){};
void  AirCraft::refuel(){

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
void  AirCraft::set_numberofFlights(int n){
    this->numberOfFlights = n;
}
int  AirCraft::get_numberofFlights(){
    return this->numberOfFlights;
}