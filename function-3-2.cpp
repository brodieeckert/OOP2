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

bool equalsArray(int *numbers1,int *numbers2, int length){
    for (int i = 0; i< length; i++){
        if(*numbers1 != *numbers2){
            return false;
        }
    }
    return true;
}

void printNumbers(int *numbers, int length){
    for (int i = 0; i< length;i++){
        cout << i+1 << " "<< numbers[i] << endl;
    }
}

int *reverseArray(int *numbers1, int length){
    int *b = new int(length);
    for(int i = 0; i < length;i++){
        b[length-i-1] = numbers1[i];
    }
    return b;
}