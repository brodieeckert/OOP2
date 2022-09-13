#ifndef COMPUTER_H
#define COMPUTER_H

#include <iostream>
#include "Player.h"
#include <string>

using namespace std;

class Computer : public Player
{
private:
    string letter = "r";
public:
    Computer(string letter);
    void move();
};

#endif