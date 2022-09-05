#include <iostream>
#include "Orchestra.h"

int main(){
    Musician Cooper("Obo",100);
    cout << "Cooper has " << Cooper.get_experience() << " years experience on the " << Cooper.get_instrument() <<endl;

}