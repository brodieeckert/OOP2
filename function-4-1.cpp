#include <iostream>

void passenger_board(){
    if(this.bus_count < this.capacity){
        BusCounter.bus_count++;
    }
};  // person tries to board the bus increments bus_count by one if bus_count < capacity



  void passenger_exit(){
if(this.bus_count >0){
        this.bus_count--;
    }
  };   // person exits bus - decrements bus_count by one if bus has more than zero people.




  int get_count(){
    return(this.bus_count);
  }; // returns the current count of people in the bus. 