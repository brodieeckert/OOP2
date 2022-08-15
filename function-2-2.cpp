#include <iostream>

int max_sub_sum(int *nums,int length){
    int max_sum = 0;
    int new_sum = 0;
    for(int k = 0; k < length; k++){      //starting number
        for(int i = 0; i<length;i++){
            new_sum = 0;      
            for(int j = k; j <= i;j++){
                new_sum = nums[j] + new_sum;
            }
            if(max_sum < new_sum){
                    max_sum = new_sum;
                }
        }
    }
    
    return max_sum;
}
