#ifndef PLAYER_H
#define PLAYER_H
#include <string>

using namespace std;


class Player
{
protected:
    string moves = "";
    int NoMoves = 0;
public:
    Player(/* args */);
    virtual void move() = 0;
    string getMoves();
    char getMove();
    bool win(Player* opponent);
};

#endif