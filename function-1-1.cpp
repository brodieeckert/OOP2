#include <iostream>

using namespace std;

int *readNumbers(){
    int length = 10;
    int *a = new int(length);
    for (int i = 0; i < length ; i++){
        cin >> a[i] ;
    }
    return a;
}



void printNumbers(int *numbers, int length){
    for (int i = 0; i< length;i++){
        cout << i << " "<< numbers[i] << endl;
    }
}