#include <iostream>
#include "Wagon.h"

using namespace std;

Wagon::Wagon(){

};

bool Wagon::addCapybara(Capybara newCapy){
    
    if(number >=4){
        return false;
        }
        else{    
            
            seat[number] = newCapy;
            number++;
        }
    

    return true;
}
void Wagon::emptyWagon(){
    for(int i =0;i<4;i++){
        this->seat[i] = Capybara();
    }
    this->number = 0;
}
void Wagon::printCapybaras(){
    for(int i = 0; i<number;i++){
        cout << seat[i].getName() << " " << seat[i].getAge() << endl;
    }
}