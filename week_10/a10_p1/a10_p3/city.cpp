/*CH-230-A
A10p3.c
Erza Dauti
edauti@constructor.university
*/



// City.cpp 

#include "City.h"
 
/* Default constructor */
City::City() : name(""), inhabitants(0), mayor(""), area(0.0) {}

/* Update the city name */
void City::setName(const std::string& newName) {
    name = newName;
}

/* Update the number of inhabitants */
void City::setInhabitants(int newInhabitants) {
    inhabitants = newInhabitants;
}

/* Update the mayor's name */
void City::setMayor(const std::string& newMayor) {
    mayor = newMayor;
}

/* update the area of the city */
void City::setArea(double newArea) {
    area = newArea;
}

/* Retrieve the city name */
std::string City::getName() const {
    return name;
}

/* Retrieve the number of inhabitants */
int City::getInhabitants() const {
    return inhabitants;
}

/* Retrieve the mayor's name */
std::string City::getMayor() const {
    return mayor;
}

/* Retrieve the city's area */
double City::getArea() const {
    return area;
}

