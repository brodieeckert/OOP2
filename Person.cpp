#include "Person.h"
#include <iostream>
#include <string>
#include "Player.h"

Person::Person()
{
    this->moves = "";
}

void Person::move(){
    cout << "Make a move! (r,p,s)" << endl;
    char temp2;
    string temp = this->moves;
    cin >> temp2;
    if (temp2 != 'r' && temp2 != 'p' && temp2 != 's'){
        cout << "Invalid Move" << endl;
        this->move();
    }

    this->moves = temp + temp2;
    this->NoMoves++;

}
