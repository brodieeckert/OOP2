#include "Player.h"
#include <iostream>
#include <string>


Player::Player()
{
    this->moves = "";

}

string Player::getMoves(){
    return this->moves;
}
char Player::getMove(){
    return this->moves[this->NoMoves-1];
}
bool Player::win(Player* opponent){
    if(opponent->getMove() == 'r'){
        if(this->getMove() == 'r'){
            std::cout << "Draw! Go again." << std::endl;
            this->move();
            opponent->move();
            this->win(opponent);
            return false;
        }
        else if(this->getMove() == 's'){
            cout << "Computer has won" << endl;
            cout << "Your moves:" << this->getMoves() << endl;
            cout << "Computer moves: " << opponent->getMoves() << endl;
            return false;
        }
        else if(this->getMove() == 'p'){
            std::cout << "You win!" << std::endl;
            cout << "Your moves:" << this->getMoves() << endl;
            cout << "Computer moves: " << opponent->getMoves() << endl;
            return true;
        }
    }


    if(opponent->getMove() == 'p'){
        if(this->getMove() == 'p'){
            std::cout << "Draw! Go again." << std::endl;
            return false;
        }
        else if(this->getMove() == 'r'){
            cout << "Computer has won" << endl;
            cout << "Your moves:" << this->getMoves() << endl;
            cout << "Computer moves: " << opponent->getMoves() << endl;
            return false;
        }
        else if(this->getMove() == 's'){
            std::cout << "You win!" << std::endl;
            cout << "Your moves:" << this->getMoves() << endl;
            cout << "Computer moves: " << opponent->getMoves() << endl;
            return true;
        }
    }


    if(opponent->getMove() == 's'){
        if(this->getMove() == 's'){
            std::cout << "Draw! Go again." << std::endl;
            return false;
        }
        else if(this->getMove() == 'p'){
            cout << "Computer has won" << endl;
            cout << "Your moves:" << this->getMoves() << endl;
            cout << "Computer moves: " << opponent->getMoves() << endl;
            return false;
        }
        else if(this->getMove() == 'r'){
            std::cout << "You win!" << std::endl;
            cout << "Your moves:" << this->getMoves() << endl;
            cout << "Computer moves: " << opponent->getMoves() << endl;
            return true;
        }
    }
    return false;
}


