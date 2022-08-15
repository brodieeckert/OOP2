#include <iostream>

using namespace std;

extern void copy_integers(int old_array[],int new_array[],int length);

int main(){
    int n = 9;
    int a[n] = {1,2,3,4,5,6,7,8,9};
    int b[n];

    copy_integers(a,b,n);


}