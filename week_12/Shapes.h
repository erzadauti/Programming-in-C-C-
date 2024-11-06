/*CH-230-A
A12p1.c
Erza Dauti
edauti@constructor.university
*/

// Shapes.h

#ifndef SHAPES_H
#define SHAPES_H

#include <string>

class Shape {
private:
    std::string name;

public:
    Shape(const std::string&);
    void printName() const;
};

class CenteredShape : public Shape {
private:
    double x, y;

public:
    CenteredShape(const std::string&, double, double);
};

class RegularPolygon : public CenteredShape {
private:
    int EdgesNumber;

public:
    RegularPolygon(const std::string&, double, double, int);
};

class Circle : public CenteredShape {
private:
    double Radius;

public:
    Circle(const std::string&, double, double, double);
};

class Hexagon : public RegularPolygon {
private:
    double side;
    std::string color;

public:
    Hexagon(const std::string&, double, double, int, double, const std::string&);
    double getSide() const;
    void setSide(double);
    std::string getColor() const;
    void setColor(const std::string&);
    double computePerimeter() const;
    double computeArea() const;
    Hexagon();
    Hexagon(const Hexagon&);
    ~Hexagon();
};

#endif // SHAPES_H


