#include <iostream>
#include "unit.h"

using namespace std;

int main(){
    Unit a1(100,1000,10000);


    cout << a1.get_num_bedrooms() << endl;
    cout << a1.get_area() << endl;
    cout << a1.get_value() << endl;
}