/*CH-230-A
A12p6.c
Erza Dauti
edauti@constructor.university
*/


#ifndef _CIRCLE_H
#define _CIRCLE_H

#include "Area.h"

class Circle : public Area {
public:
    Circle(const char *n, double a);
    ~Circle();
    double calcArea() const override;
    double calcPerimeter() const override; 
private:
    double radius;
};

#endif
