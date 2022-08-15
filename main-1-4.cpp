#include <iostream>

using namespace std;

extern void copy_doubles(double *old_array[],double *new_array[],int length);

int main(){
    int n = 6;
    double old_array[6] = {1,2,3,4,5,6};
    double new_array[6];

    copy_doubles(old_array,new_array,n);

return 0;
}