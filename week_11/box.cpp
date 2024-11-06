/*CH-230-A
A11p1.c
Erza Dauti
edauti@constructor.university
*/

// Box.cpp

#include "Box.h"

/* Default constructor */
Box::Box() : height(0.0), width(0.0), depth(0.0) {}

/* Constructor with parameters */
Box::Box(double h, double w, double d) : height(h), width(w), depth(d) {}

Box::Box(const Box &other) : height(other.height), width(other.width), depth(other.depth) {}

Box::~Box() {} 

/* Gettting the parameters using the getter method */
double Box::getHeight() const {
    return height;
}

/* Setting the parameters using the setter method */
void Box::setHeight(double h) {
    height = h;
}

double Box::getWidth() const {
    return width;
}

void Box::setWidth(double w) {
    width = w;
}

double Box::getDepth() const {
    return depth;
}

void Box::setDepth(double d) {
    depth = d;
}

/* Multiplication  of parameters */
double Box::calculateVolume() const {
    return height * width * depth;
}
