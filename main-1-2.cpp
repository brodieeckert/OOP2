#include <iostream>
#include "Musician.h"
#include "Orchestra.h"

int main(){
    Musician m1("Obo",1);
    Musician m2("trump",5);
    Musician m3("drum",4);
    Musician m4("sax",3);

    Orchestra O(3);

    O.add_musician(m1);
    cout << O.get_current_number_of_members() << endl;
    O.add_musician(m2);
    cout << O.get_current_number_of_members() << endl;
    O.add_musician(m3);
    cout << O.get_current_number_of_members() << endl;
    O.add_musician(m4);

    


}