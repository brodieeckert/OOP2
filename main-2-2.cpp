#include <iostream>

extern int max_sub_sum(int *nums,int length);

int main(){
    int len = 10;
    int n[len] = { 31, -41, 59, 26, -53, 58, 97, -93, -23, 84 };
    int a = max_sub_sum(n,len);
    std::cout << a << std::endl;

}