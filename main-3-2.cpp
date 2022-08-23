#include <iostream>

extern int *readNumbers();
extern void printNumbers(int *numbers, int length);
extern int *reverseArray(int *numbers1, int length);
extern bool equalsArray(int *numbers1,int *numbers2, int length);

int main(){
    int length = 10;
    int *a = readNumbers();
  //  printNumbers(a,10);
    int *b = reverseArray(a,length);
   // printNumbers(b,10);
    bool T = equalsArray(a,b,length);

    std::cout << T << std::endl;

    delete [] a;
    delete [] b;


}