/*CH-230-A
A10p6.c
Erza Dauti
edauti@constructor.university
*/

// testcritter.cpp

#include <iostream>
#include "Critter.h"

int main() {

    /* Instance of Critter using the new constructor */
    Critter critter5("Rusty", 2, 3, 6.0, 0.8);

    /* Thirst level for critter5 */
    critter5.setThirst(0.6);

    /* Display information */
    critter5.print();

    return 0;
}
