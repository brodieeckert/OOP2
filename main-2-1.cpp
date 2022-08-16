#include <iostream>
#include <string>
using namespace std;
extern float add_op(float left, float right);
extern float subtract_op(float left, float right);
extern float arithmetic_ops(float left, float right, std::string op);

int main(){
    float a = 2, b = 3;
    string op = "+";

    cout << arithmetic_ops(a,b,op) << endl;
    
    return 0;
}