/*
CH-230-A
A10p2.c
Erza Dauti
edauti@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "Critter.h"

int main(int argc, char** argv)
{
    Critter c;

    std::string name;
    int hunger;
    /* New property of the critter */
    int age;        
    std::string color;  

    std::cout << std::endl << "Please enter data: " << std::endl;
    std::cout << "Name: ";
    getline(std::cin, name);
    c.setName(name);

    std::cout << "Hunger: ";
    std::cin >> hunger;
    c.setHunger(hunger);

    std::cout << "Age: ";
    std::cin >> age;
    c.setAge(age);

    std::cout << "Color: ";
    getchar(); 
    getline(std::cin, color);
    c.setColor(color);

    std::cout << "You have created:" << std::endl;
    c.print();

    return 0;
}
