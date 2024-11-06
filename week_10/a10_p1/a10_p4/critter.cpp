/*CH-230-A
A10_p4.c
Erza Dauti
edauti@constructor.university
*/


#include "Critter.h"
#include <iostream>

/* Default constructor */
Critter::Critter() : name("default_critter"), hunger(0), boredom(0), height(5.0) {
    std::cout << "A default Critter has been created." << std::endl;
}

/* Only name of constructor */
Critter::Critter(const std::string& critterName) : name(critterName), hunger(0), boredom(0), height(5.0) {
    std::cout << "A Critter named " << name << " has been created." << std::endl;
}

/* All parameters of constructor */
Critter::Critter(const std::string& critterName, int critterHunger, int critterBoredom, double critterHeight)
    : name(critterName), hunger(critterHunger), boredom(critterBoredom), height(critterHeight) {
    std::cout << "A Critter named " << name << " with specified properties has been created." << std::endl;
}

void Critter::setName(const std::string& newname) {
    name = newname;
}

void Critter::setHunger(int newhunger) {
    hunger = newhunger;
}

void Critter::setBoredom(int newboredom) {
    boredom = newboredom;
}

void Critter::setHeight(double newheight) {
    height = newheight;
}

// Getter methods
std::string Critter::getName() const {
    return name;
}

int Critter::getHunger() const {
    return hunger;
}

int Critter::getBoredom() const {
    return boredom;
}

double Critter::getHeight() const {
    return height;
}

void Critter::print() const {
    std::cout << "Critter: " << name << ", Hunger: " << hunger << ", Boredom: " << boredom << ", Height: " << height << std::endl;
}

