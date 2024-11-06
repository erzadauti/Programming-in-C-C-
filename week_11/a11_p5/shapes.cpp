/*CH-230-A
A11p5.c
Erza Dauti
edauti@constructor.university
*/


#include "Shapes.h"
#include <iostream>  
#include <cmath>


/* Implementing the Shape class */
Shape::Shape(const std::string& n) : name(n) {
}

Shape::Shape() : name("Default Shape") {
}

Shape::Shape(const Shape& other) : name(other.name) {
}

void Shape::printName() const {
    std::cout << "Shape Name: " << name << std::endl;
}

std::string Shape::getName() const {
    return name;
}

void Shape::setName(const std::string& newName) {
    name = newName;
}

/* Implementing the CenteredShape class */
CenteredShape::CenteredShape(const std::string& n, double nx, double ny) : Shape(n), x(nx), y(ny) {
}

CenteredShape::CenteredShape() : Shape("Default Centered Shape"), x(0), y(0) {
}

CenteredShape::CenteredShape(const CenteredShape& other) : Shape(other), x(other.x), y(other.y) {
}

void CenteredShape::move(double dx, double dy) {
    x += dx;
    y += dy;
}

double CenteredShape::getX() const {
    return x;
}

void CenteredShape::setX(double newX) {
    x = newX;
}

double CenteredShape::getY() const {
    return y;
}

void CenteredShape::setY(double newY) {
    y = newY;
}

/* Implementing of the RegularPolygon class */
RegularPolygon::RegularPolygon(const std::string& n, double nx, double ny, int nl) :
    CenteredShape(n, nx, ny), EdgesNumber(nl) {
}

RegularPolygon::RegularPolygon() : CenteredShape("Default Regular Polygon", 0, 0), EdgesNumber(4) {
}

RegularPolygon::RegularPolygon(const RegularPolygon& other) :
    CenteredShape(other), EdgesNumber(other.EdgesNumber) {
}

int RegularPolygon::getEdgesNumber() const {
    return EdgesNumber;
}

void RegularPolygon::setEdgesNumber(int newEdgesNumber) {
    EdgesNumber = newEdgesNumber;
}

/* Calculate the perimeter of the regular polygon */
double RegularPolygon::perimeter() const {
    return static_cast<double>(EdgesNumber) * 2.0 * M_PI; 
}

/* Calculate the area of the regular polygon */
double RegularPolygon::area() const {
    return 0.5 * EdgesNumber * pow(perimeter() / (2.0 * M_PI), 2);
}

/* Implementing the Circle class */
Circle::Circle(const std::string& n, double nx, double ny, double r) :
    CenteredShape(n, nx, ny), Radius(r) {
}

Circle::Circle() : CenteredShape("Default Circle", 0, 0), Radius(1) {
}

Circle::Circle(const Circle& other) : CenteredShape(other), Radius(other.Radius) {
}

double Circle::getRadius() const {
    return Radius;
}

void Circle::setRadius(double newRadius) {
    Radius = newRadius;
}

/* Calculate the perimeter of the circle */
double Circle::perimeter() const {
    return 2.0 * M_PI * Radius;
}

/* Calculate the area of the circle */
double Circle::area() const {
    return M_PI * pow(Radius, 2);
}

/* Implementing the Rectangle class */
Rectangle::Rectangle(const std::string& n, double nx, double ny, double nwidth, double nheight) :
    RegularPolygon(n, nx, ny, 4), width(nwidth), height(nheight) {
}

Rectangle::Rectangle() : RegularPolygon("Default Rectangle", 0, 0, 4), width(1), height(1) {
}

Rectangle::Rectangle(const Rectangle& other) :
    RegularPolygon(other), width(other.width), height(other.height) {
}

double Rectangle::getWidth() const {
    return width;
}

void Rectangle::setWidth(double newWidth) {
    width = newWidth;
}

double Rectangle::getHeight() const {
    return height;
}

void Rectangle::setHeight(double newHeight) {
    height = newHeight;
}

/* Calculate the perimeter of the rectangle */
double Rectangle::perimeter() const {
    return 2.0 * (width + height);
}

/* Calculate the area of the rectangle */
double Rectangle::area() const {
    return width * height;
}

/* Implementing the Square class */
Square::Square(const std::string& n, double nx, double ny, double nside) :
    Rectangle(n, nx, ny, nside, nside), side(nside) {
}

Square::Square() : Rectangle("Default Square", 0, 0, 1, 1), side(1) {
}

Square::Square(const Square& other) : Rectangle(other), side(other.side) {
}

double Square::getSide() const {
    return side;
}

void Square::setSide(double newSide) {
    side = newSide;
}

/* Calculate the perimeter of the square */
double Square::perimeter() const {
    return 4.0 * side;
}

/* Calculate the area of the square */
double Square::area() const {
    return pow(side, 2);
}

