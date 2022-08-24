#include <iostream>


int *left_shift(int *vals, int len, int amount){

    int *shifted = new int[len];

    for(int i = 0; i<len;i++){
        shifted[i]=0;
    }

    for(int i = 0; i<len-amount;i++){
        shifted[i]=vals[i+amount];
    }
    return shifted;
}