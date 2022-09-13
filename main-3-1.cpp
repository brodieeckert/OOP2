#include <iostream>
#include "Player.h"
#include "Computer.h"
#include "Person.h"


int main(){
    Computer Bot("r");
    Person Brodie;
    Bot.move();
    Brodie.move();

    Brodie.win(&Bot);
    

    





}