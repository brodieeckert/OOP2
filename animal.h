
#include <string>
#include <iostream>
using namespace std;


class animal
{
protected:
    string name ;              // the animal's name
    int animalID ;             // the animal's unique ID
    int volume ;               // the volume of the animal's body
public:
    animal();
    animal(string n, int v) ;  // creates an animal with name n and body volume v.
                             // animals are allocated a unique ID on creation
    void set_name(string name);
    void set_volume(int volume);
    virtual string get_name() = 0;
    int get_volume();
    int get_animalID();
    ~animal();
};

