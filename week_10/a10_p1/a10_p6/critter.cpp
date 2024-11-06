/*CH-230-A
A10p6.c
Erza Dauti
edauti@constructor.university
*/


// Critter.cpp

#include "Critter.h"
#include <iostream>

/* Default constructor */
Critter::Critter() : name("default_critter"), hunger(0.2), boredom(0),
                     height(5.0), thirst(0.2) {
    std::cout << "A default Critter has been created." << std::endl;
}

/* Only name of constructor */
Critter::Critter(const std::string& critterName) : name(critterName),
                     hunger(0.2), boredom(0), height(5.0), thirst(0.2) {
    std::cout << "A Critter named " << name << " has been created." << std::endl;
}

/* All parameters of constructor */
Critter::Critter(const std::string& critterName, int critterHunger,
                 int critterBoredom, double critterHeight)
    : name(critterName), hunger(convertToDouble(critterHunger)),
      boredom(critterBoredom), height(critterHeight), thirst(0.2) {
    std::cout << "A Critter named " << name <<
        " with specified properties has been created." << std::endl;
}

/* New constructor with thirst parameter */
Critter::Critter(const std::string& critterName, int critterHunger,
                 int critterBoredom, double critterHeight, double critterThirst)
    : name(critterName), hunger(convertToDouble(critterHunger)),
      boredom(critterBoredom), height(critterHeight), thirst(critterThirst) {
    std::cout << "A Critter named " << name <<
        " with specified properties has been created." << std::endl;
}

void Critter::setName(const std::string& newname) {
    name = newname;
}

void Critter::setHunger(int newhunger) {
    hunger = convertToDouble(newhunger);
}

void Critter::setBoredom(int newboredom) {
    boredom = newboredom;
}

void Critter::setHeight(double newheight) {
    height = newheight;
}

void Critter::setThirst(double newthirst) {
    thirst = newthirst;
}

std::string Critter::getName() const {
    return name;
}

double Critter::getHunger() const {
    return convertToInt(hunger);
}

int Critter::getBoredom() const {
    return boredom;
}

double Critter::getHeight() const {
    return height;
}

double Critter::getThirst() const {
    return thirst;
}

/* Service method */
void Critter::print() const {
    std::cout << "Critter: " << name << ", Hunger: " << convertToInt(hunger)
              << ", Boredom: " << boredom << ", Height: " << height
              << ", Thirst: " << thirst << std::endl;
}

/* Converting integer hunger level to double */
double Critter::convertToDouble(int hungerLevel) const {
    return static_cast<double>(10 - hungerLevel) / 10.0;
}

/* Converting double hunger percentage to integer */
int Critter::convertToInt(double hungerPercentage) const {
    return static_cast<int>((1.0 - hungerPercentage) * 10);
}





