#include <iostream>
#include <string> 
using namespace std;

void copy_doubles(double *old_array[],double *new_array[],int length){
    for(int i = 0; i < length ; i++ ){
        cout << *(new_array+i) << " ";
        *(new_array+i) = *(old_array+i);
        cout << *(new_array + i) << " ";
    }  
    return;
}