

#include "AirCraft.h"
#include "Airplane.h"


Airplane::Airplane(/* args */){

}
Airplane::Airplane(int w, int p){
    this->fuel = 100;

    this->weight = w;
    this->numPassengers = p;

}          // Create Airplane with weight w and passengers p

void Airplane::reducePassengers(int x){
    if(this->numPassengers < x){
        this->numberOfFlights = 0;
    }
    else{this->numPassengers = this->numPassengers-x;}

}    // reduce passenger list by x
int Airplane::get_numPassengers(){
    return this->numPassengers;
}

void Airplane::fly(int headwind, int minutes){
    float old_fuel = this->fuel;


    if(headwind >=60){
        this->fuel = this->fuel-((0.5+this->numPassengers*0.1)*this->fuel * minutes);
    }
    if(headwind < 60){
        this->fuel = this->fuel-((0.3+this->numPassengers*0.1)*this->fuel * minutes);
    }
    if(this->fuel > old_fuel*0.2){
        this->numberOfFlights++;

    }
    else{ this->fuel = old_fuel;}
    
}         // headwind in km/h and minutes (time flying)