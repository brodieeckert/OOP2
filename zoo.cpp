#include <string.h>
#include <iostream>
#include "animal.h"
#include "vegie.h"
#include "hunter.h"
#include "zoo.h"


zoo::zoo(string n,int cows,int lions){
    this->name = n;
    this->number_of_animals = cows + lions;
    for (int i = 0; i < cows; i++)
    {
        animals[i] = new vegie("Daisy",100);
    }

    for(int i = cows;i < cows+lions;i++){
        animals[i] = new vegie("Clarence",50);
    }
    
}      // create a zoo with the given number of cows and lions
int zoo::get_number_of_animals(){
    return this->number_of_animals;
}

string zoo::get_name(){
    return this->name;
}

animal** zoo::get_animals(){
    return this->animals;
}