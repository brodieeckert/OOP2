#include <string.h>
#include <iostream>
#include "animal.h"
#include "vegie.h"
#include "hunter.h"
#include "zoo.h"



class sort_by_animalID
{
private:
    
public:
    static void sort(animal **animals,int n);	// sorts the array of n animals into ascending order using their animalIDs
};
