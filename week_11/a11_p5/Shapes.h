/*CH-230-A
A11p5.c
Erza Dauti
edauti@constructor.university
*/


#ifndef __SHAPES_H
#define __SHAPES_H

#include <string>

class Shape {
private:
    std::string name;

public:
    Shape(const std::string&);
    Shape();
    Shape(const Shape&);
    void printName() const;
    std::string getName() const;
    void setName(const std::string&);
};

class CenteredShape : public Shape {
private:
    double x, y;

public:
    CenteredShape(const std::string&, double, double);
    CenteredShape();
    CenteredShape(const CenteredShape&);
    void move(double, double);
    double getX() const;
    void setX(double);
    double getY() const;
    void setY(double);
};

class RegularPolygon : public CenteredShape {
private:
    int EdgesNumber;

public:
    RegularPolygon(const std::string&, double, double, int);
    RegularPolygon();
    RegularPolygon(const RegularPolygon&);
    int getEdgesNumber() const;
    void setEdgesNumber(int);
    double perimeter() const;
    double area() const;
};

class Circle : public CenteredShape {
private:
    double Radius;

public:
    Circle(const std::string&, double, double, double);
    Circle();
    Circle(const Circle&);
    double getRadius() const;
    void setRadius(double);
    double perimeter() const;
    double area() const;
};

class Rectangle : public RegularPolygon {
private:
    double width, height;

public:
    Rectangle(const std::string&, double, double, double, double);
    Rectangle();
    Rectangle(const Rectangle&);
    double getWidth() const;
    void setWidth(double);
    double getHeight() const;
    void setHeight(double);
    double perimeter() const;
    double area() const;
};

class Square : public Rectangle {
private:
    double side;

public:
    Square(const std::string&, double, double, double);
    Square();
    Square(const Square&);
    double getSide() const;
    void setSide(double);
    double perimeter() const;
    double area() const;
};

#endif // __SHAPES_H

