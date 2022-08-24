#include <iostream>

int fishing_fine_lookup(int over){
    if (over ==0){return 0;}
    if (over >0 && over < 10 ){return 180;}
    if (over >=10 && over < 20 ){return 406;}
    if (over >=20 && over < 30 ){return 825;}
    if (over >=30 && over < 45 ){return 1500;}
    if (over >=45 ){return 1690;}

return 0;
}