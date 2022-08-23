#include <iostream>

extern int *readNumbers();
extern void printNumbers(int *numbers, int length);
extern bool equalsArray(int *numbers1,int *numbers2, int length);
extern int secondSmallestSum(int *numbers, int length);

int main(){
    int length = 10;
    int *a = readNumbers();
    int b = secondSmallestSum(a,length);

    std::cout << "Second Smallest Sum is: "<< b << std::endl;

    delete [] a;


}