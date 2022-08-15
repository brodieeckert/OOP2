#include <iostream>

int max_sub_sum(int *nums,int length){
    int max_sum = 0;
    int new_sum = 0;
    
    for(int i = 0; i < length; i++){
        new_sum = 0;
        for(int j = i; j< length; j++){
            new_sum = new_sum + nums[j];
            if(new_sum > max_sum){
                max_sum = new_sum;
            }
        }
    }
    
    return max_sum;
}
