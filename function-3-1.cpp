#include <iostream>

int integers_in_range(int vals[], int length, int bottom, int top){
    int sum = 0;
    for( int i =0;i<length;i++){
        if (vals[i] <= top && vals[i] >= bottom){
            sum++;
        }
    }
    return sum;
}