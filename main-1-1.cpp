#include <iostream>

extern int *readNumbers();
extern void printNumbers(int *numbers, int length);

int main(){

    int *a = readNumbers();
    printNumbers(a,10);
    delete [] a;


}