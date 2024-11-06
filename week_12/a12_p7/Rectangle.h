/*CH-230-A
A12p6.c
Erza Dauti
edauti@constructor.university
*/

#ifndef _RECTANGLE_H
#define _RECTANGLE_H

#include "Area.h"

class Rectangle : public Area {
public:
    Rectangle(const char *n, double a, double b);
    ~Rectangle();
    double calcArea() const override;
    double calcPerimeter() const override; 
private:
    double length;
    double width;
};

#endif
