#include <iostream>

extern void multiples_of_seven(int *nums,int length);

int main(){
    int n = 3;
    int nums[n] = {7,7,3};
    int *p = &nums[0];
    multiples_of_seven(p,n);
}