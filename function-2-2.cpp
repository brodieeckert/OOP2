#include <iostream>
#include <math.h>

int bin_to_int(int binary_digits[], int number_of_digits){
    int sum = 0;

    for(int i = 0; i< number_of_digits; i++){
        sum = sum + binary_digits[number_of_digits-i-1]*pow(2,i);
    }
    return sum;
}