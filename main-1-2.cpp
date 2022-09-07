#include <iostream>
#include "ApartmentBuilding.h"
#include "Unit.h"

using namespace std;

int main(){
    Unit a1(100,1000,10000);
    ApartmentBuilding(2);


    cout << a1.get_num_bedrooms() << endl;
    cout << a1.get_area() << endl;
    cout << a1.get_value() << endl;


}