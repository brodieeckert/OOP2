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

int secondSmallestSum(int *numbers, int length){
    int min = numbers[0];
    int second_min = numbers[0];

    for(int i = 0; i < length;i++){
        int sub_sum = 0;
        for (int j = i; j < length;j++){
            sub_sum = sub_sum + numbers[j];
            if(sub_sum <= min){
                second_min = min;
                min = sub_sum;
            }

        }
    }
    return second_min;
}