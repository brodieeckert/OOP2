#include "Computer.h"
#include <iostream>
#include <string>
#include "Player.h"

Computer::Computer(string letter)
{
    this->letter = letter;
}

void Computer::move(){
    string temp = this->moves;

    this->moves = new char[this->NoMoves];

    this->moves = temp + "r";
    this->NoMoves++;
}
