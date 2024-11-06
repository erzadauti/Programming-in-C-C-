/*CH-230-A
A12p1.c
Erza Dauti
edauti@constructor.university
*/

// Shapes.cpp

#include "Shapes.h"
#include <iostream>
#include <cmath>

using namespace std;

/* Implementing shape class */ 

Shape::Shape(const string& n) : name(n) {}

void Shape::printName() const {
    cout << name << endl;
}

/* Implementing CenterShaped class */

CenteredShape::CenteredShape(const string& n, double nx, double ny) : Shape(n), x(nx), y(ny) {}

/* Implementing RegularPolygon class */ 

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
    CenteredShape(n, nx, ny), EdgesNumber(nl) {}

/* Implementing Circle class class */ 

Circle::Circle(const string& n, double nx, double ny, double r) :
    CenteredShape(n, nx, ny), Radius(r) {}

/* Implementing Hexagon class */

Hexagon::Hexagon(const string& n, double nx, double ny, int nl, double s, const string& c) :
    RegularPolygon(n, nx, ny, nl), side(s), color(c) {}

double Hexagon::getSide() const {
    return side;
}

void Hexagon::setSide(double s) {
    side = s;
}

string Hexagon::getColor() const {
    return color;
}

void Hexagon::setColor(const string& c) {
    color = c;
}

double Hexagon::computePerimeter() const {
    return 6 * side;
}

double Hexagon::computeArea() const {
    return (3 * sqrt(3) / 2) * pow(side, 2);
}

Hexagon::Hexagon() : RegularPolygon("DefaultHexagon", 0, 0, 6), side(0), color("DefaultColor") {}

Hexagon::Hexagon(const Hexagon& other) :
    RegularPolygon(other), side(other.side), color(other.color) {}

Hexagon::~Hexagon() {
    cout << "Hexagon Destructor Called" << endl;
}
