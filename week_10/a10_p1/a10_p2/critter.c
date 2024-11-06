/*
CH-230-A
A10p2.c
Erza Dauti
edauti@jacobs-university.de
*/

#include "Critter.h"
#include <iostream>

void Critter::setName(std::string& newname) {
    name = newname;
}

void Critter::setHunger(int newhunger) {
    hunger = newhunger;
}

void Critter::setAge(int newage) {
    age = newage;
}

void Critter::setColor(std::string& newcolor) {
    color = newcolor;
}

int Critter::getHunger() {
    return hunger;
}

int Critter::getAge() {
    return age;
}

std::string Critter::getColor() {
    return color;
}

void Critter::print() {
    std::cout << "I am " << name << ". My hunger level is " << hunger << ". ";
    std::cout << "I am " << age << " years old and my color is " << color << "." << std::endl;
}
