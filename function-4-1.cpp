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
    int min = 1000;
    int second_min = 10000;
    for(int i = 0; i< length;i++){
        if (min < numbers[i]){
            min = numbers[i];
        }
        if (second_min < numbers[i]){
            second_min = numbers[i];
        }

    }
   

    for(int i = 0; i < length;i++){
        int sub_sum = 0;
        for (int j = i; j < length;j++){
            sub_sum = sub_sum + numbers[j];
            if(sub_sum <= second_min){
                second_min = min;
                min = sub_sum;
            }

        }
    }
    return second_min;
}