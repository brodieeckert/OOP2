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

void hexDigits(int *numbers, int length){
    for(int i = 0 ; i < length ; i++ ){
        switch (numbers[i]){
            case 10:

                cout << i << " " << numbers[i] << " A"<< endl;

                break;
            case 11:
            
                cout << i << " " << numbers[i] << " B"<< endl;

                break;
            case 12:
            
                cout << i << " " << numbers[i] << " C"<< endl;

                break;
            case 13:
            
                cout << i << " " << numbers[i] << " D"<< endl;

                break;
            case 14:
            
                cout << i << " " << numbers[i] << " E"<< endl;

                break;
            case 15:
            
                cout << i << " " << numbers[i] << " F"<< endl;

                break;
            default:

                cout << i << " " << numbers[i] << " " << numbers[i]<< endl;
                break;
        }

    }
}

void printNumbers(int *numbers, int length){
    for (int i = 0; i< length;i++){
        cout << i << " "<< numbers[i] << endl;
    }
}

