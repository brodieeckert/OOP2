#include <iostream>
#include <string>
#include "Capybara.h"
using namespace std;

class Wagon: public Capybara{
    protected:
        int number = 0;

        Capybara seat[4];

    public:
        Wagon();
        bool addCapybara(Capybara newCapy);
        void emptyWagon();
        void printCapybaras();
