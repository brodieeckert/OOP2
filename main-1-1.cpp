#include <iostream>
#include <string>

using namespace std;

extern void string_2d_copy(std::string first[][2], std::string second[][2], int n);


int main(){
    int n = 3;
    string first[n][2] = {{"Peter","Isaac"},{"Hamish","Stew"},{"Cooper","David"}};
    string second[n][2];

    string_2d_copy(first,second,n);




    
}