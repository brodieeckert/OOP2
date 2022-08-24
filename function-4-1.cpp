#include <iostream>
#include "function-4-1.h"

BusCounter::BusCounter(int cap){
  bus_count = 0;
  capacity = cap;
}


void BusCounter::passenger_exit()
{
	if(bus_count >0){
    bus_count--;
  }
}	

int BusCounter::get_count()
{
	return bus_count;
}

void BusCounter::passenger_board()
{
	if(bus_count < capacity){
    bus_count++;
  }
}	
