/*CH-230-A
A10p4.c
Erza Dauti
edauti@constructor.university
*/


#include <iostream>
#include "Critter.h"

int main() {
    /* Using different constructors to create instances of the Critter class */
    Critter critter1; 
    Critter critter2("Fluffy"); 
    Critter critter3("Spike", 3, 2, 8.0); 
    Critter critter4("Whiskers", 2, 1); 

    /* Set hunger level */
    critter1.setHunger(2);
    critter2.setHunger(2);
    critter3.setHunger(2);
    critter4.setHunger(2);

    /* Set hunger level */
    critter1.print();
    critter2.print();
    critter3.print();
    critter4.print();

    return 0;
}
