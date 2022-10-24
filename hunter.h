#include <string.h>
#include <iostream>
#include "animal.h"
using namespace std;


class hunter : public animal
{
private:
    int kills ;               // how many kills have been recorded, initialised to 0
    static int nextID ; 
public:
    hunter(/* args */);
    int get_kills();
    void set_kills(int k);
    string get_name();


    hunter(string n, int v);  // create a hunter with name n and body volume v
    ~hunter();
};


