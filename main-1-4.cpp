#include <iostream>

using namespace std;

extern void copy_doubles(double *old_array,double *new_array,int length);

int main(){
    int n = 6;
    double a[6] = {11,12,13,14,15,16};
    double b[6];
    copy_doubles(a,b,n);

return 0;
}