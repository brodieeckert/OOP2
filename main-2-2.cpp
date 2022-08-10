#include <iostream>

using namespace std;

extern int bin_to_int(int binary_digits[], int number_of_digits);
int main(){
    int n = 3;
    int bin[n] = {1,0,0};

    cout << bin_to_int(bin,n) << endl;

}