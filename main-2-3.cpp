#include <iostream>

using namespace std;

extern int palindrome_sum(int integers[], int length);
extern bool is_array_palindrome(int integers[], int length);
extern int sum_integers(int integers[], int length);

int main(){
    int n = 3;
    int integers[n] = {10,0,10};

    cout << palindrome_sum(integers,n) << endl;

}