#include <iostream> 
using namespace std;

extern float multiply_op(float left, float right);

extern float arithmetic_ops(float left, float right, float (*op)(float,float));

int main(){
    float a = 7, b = 2;
    cout << arithmetic_ops(a,b,&multiply_op) << endl;

    
}
