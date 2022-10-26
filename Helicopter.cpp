#include "Helicopter.h"

int Helicopter::heliID = 0;

Helicopter::Helicopter(){}
Helicopter::Helicopter(int w, string n){
    this->fuel = 100;
    this->name = n;
    this->weight = w;
    this->craftID = heliID;         //mabye change order
    Helicopter::heliID++;
}    // creates a Helicopter with weight w and name n

int Helicopter::get_craftID(){
    return this->craftID;
}
void Helicopter::set_craftID(int c){
    this->craftID = c;
}
string Helicopter::get_name(){
    return this->name;
}
void Helicopter::set_name(string n){
    this->name = n;
}

void Helicopter::fly(int headwind, int minutes){
    float old_fuel = this->fuel;

    float OvrWeight = (this->weight-5670)*0.01;
    if (this->weight < 5690){
        OvrWeight = 0;
    }

    if(headwind >=40){
        this->fuel = this->fuel-((0.4+OvrWeight)*this->fuel * minutes);
    }
    if(headwind < 40){
        this->fuel = this->fuel-((0.2+OvrWeight)*this->fuel * minutes);
    }
    if(this->fuel > old_fuel*0.2){
        this->numberOfFlights++;

    }
    else{ this->fuel = old_fuel;}
    
}         // headwind in km/h and minutes (time flying)