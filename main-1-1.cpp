#include <iostream>

extern int *left_shift(int *vals, int len, int amount);

int main(){
    int len = 5;
    int vals[]={1,2,3,4,5};
    int *sv=left_shift(vals,len,2);
    for(int i = 0; i < len;i++){
        std::cout << sv[i] << std::endl;
    }

  return 0;
}