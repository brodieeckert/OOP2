#include "Orchestra.h"

using namespace std;


Orchestra::Orchestra(int size):size(size){};
Orchestra::Orchestra():Orchestra(0){};

int Orchestra::get_current_number_of_members(){
    return this->members;
}

bool Orchestra::add_musician(Musician new_musician){
    if (get_current_number_of_members() > this->size){return false;}
    this->musicians[members] = new_musician;

}

bool Orchestra::has_instrument(string instrument){
    for(int i = 0; i<get_current_number_of_members();i++){
        if (musicians[i].get_instrument() == instrument){
            return true;
        }
    }
    return false;
}
Musician* Orchestra::get_members(){
    return musicians;
}
Orchestra::~Orchestra(){}