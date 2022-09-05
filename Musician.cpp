#include "Musician.h"

using namespace std;

Musician::Musician(string instrument, int experience): instrument(instrument),experience(experience){};

Musician::Musician(): Musician("Null", 0){};

string Musician::get_instrument(){
    return this->instrument;
};

int Musician::get_experience(){return this->experience;};
