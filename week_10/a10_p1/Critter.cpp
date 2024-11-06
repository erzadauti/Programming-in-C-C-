/*CH-230-A
A9p1.c
Erza Dauti
edauti@constructor.university
*/

#include <iostream>
#include "Critter.h"

void Critter::setName(std::string& newname) {
    name = newname;
}

void Critter::setHunger(int newhunger) {
    hunger = newhunger;
}

void Critter::print() {
    std::cout << "I am " << name << ". My hunger level is " << hunger << "." << std::endl;
}

int Critter::getHunger() {
    return hunger;
}
