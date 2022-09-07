#include "Unit.h"

Unit::Unit(){
    this->unit_val = 0;
    this->num_beds = 0;
    this->unit_size = 0;

}                                            // a default constructor 
Unit::Unit(int unit_val,int num_beds,double unit_size){
    this->num_beds = num_beds;
    this->unit_size = unit_size;
    this->unit_val = unit_val;
}   // a constructor that takes: the value in dollars,
                                                      // number of bedrooms, and number of square meters as parameters

int Unit::get_num_bedrooms(){
    return this->num_beds;
}                               // returns the number of bedrooms for the unit
int Unit::get_value(){
    return this->unit_val;
}                                    // returns the value in dollars of the Unit
double Unit::get_area(){
    return this->unit_size;
}                                    // returns the number of square meters in the unit