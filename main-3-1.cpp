#include <iostream>

extern int integers_in_range(int vals[], int length, int bottom, int top);
using namespace std;
int main(){
    int vals[]={1,7,3,4,6,5,2};
    int res1=integers_in_range(vals,7,3,6);
    int res2=integers_in_range(vals,7,2,4);
    cout << res1 << " " << res2 << endl;
}