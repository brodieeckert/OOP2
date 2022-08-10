#include <iostream>
#include <math.h>


bool is_array_palindrome(int integers[], int length){

    for(int i = 0; i<length/2;i++){
        if (integers[i] != integers[length-1-i]){
            return false;
        }
    }
    return true;
}

int sum_integers(int integers[], int length){
    int sum = 0;
    for(int i = 0; i<length; i++){
        sum = sum + integers[i];
    }
    return sum;
}

int palindrome_sum(int integers[], int length){
    if(length <=0){
        return -1;
    }
    if(is_array_palindrome(integers,length) == true){
        return sum_integers(integers,length);

    }

return -2;
}