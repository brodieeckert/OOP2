#include <iostream>

using namespace std;

extern void printer(int array[10][10]);

int main(){
    int a[10][10] = {0};

    printer(a);
}