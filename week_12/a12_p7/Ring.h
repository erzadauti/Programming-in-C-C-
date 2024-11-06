/*CH-230-A
A12p6.c
Erza Dauti
edauti@constructor.university
*/


#ifndef _RING_H
#define _RING_H

#include "Circle.h"

class Ring : public Circle {
public:
    Ring(const char *n, double outer, double inner);
    ~Ring();
    double calcArea() const override;
    double calcPerimeter() const override; 
private:
    double innerradius;
};

#endif
