/*CH-230-A
A12p6.c
Erza Dauti
edauti@constructor.university
*/


#ifndef _SQUARE_H
#define _SQUARE_H

#include "Area.h"

class Square : public Area {
public:
    Square(const char *n, double s);
    ~Square();
    double calcArea() const override;
    double calcPerimeter() const override; 
private:
    double side;
};

#endif
