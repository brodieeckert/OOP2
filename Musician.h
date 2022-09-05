#include <string>
#include <iostream>

using namespace std;

class Musician{
    private:
    string instrument;
    int experience;
    public:

    Musician();                  // a default constructor 
        // a constructor that takes the instrument played and the years of experience
    Musician(string instrument, int experience);//: instrument(instrument),experience(experience){};      
    std::string get_instrument();    // returns the instrument played
    int get_experience();       // returns the number of years experience
};