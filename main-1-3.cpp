#include <iostream>

extern int *readNumbers();
extern void printNumbers(int *numbers, int length);
extern bool equalsArray(int *numbers1,int *numbers2, int length);

int main(){

    int *a = readNumbers();
    std::cout << "Second array"<< std::endl;

    int *b = readNumbers();

    bool T = equalsArray(a,b,10);
    std::cout << T;
    delete [] a;
    delete [] b;


}