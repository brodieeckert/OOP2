#include <string.h>
#include <iostream>
#include "animal.h"
#include "vegie.h"
#include "hunter.h"
#include "zoo.h"
#include "sort_by_name.h"


void sort_by_name::sort(animal **animals,int n){
    int i, j;
    animal* buffer = nullptr;
    for (i = 0; i < n - 1; i++)
 
        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++)
            if (animals[j]->get_name() > animals[j + 1]->get_name())
                buffer = animals[j];
                animals[j] = animals[j + 1];
                animals[j+ 1 ] = buffer;
                buffer = nullptr;
}	// sorts the array of n animals into ascending order using their animalIDs
