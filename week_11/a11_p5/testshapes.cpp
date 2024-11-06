/*CH-230-A
A11p5.c
Erza Dauti
edauti@constructor.university
*/

#include <iostream>
#include "Shapes.h"

int main() {
    Circle c("first circle", 3, 4, 7);
    RegularPolygon r("TRIANGLE", 1, 1, 3);
    Rectangle rect("Rectangle", 0, 0, 4, 6);
    Square sq("Square", 0, 0, 5);

    std::cout << "Circle Perimeter: " << c.perimeter() << ", Area: " << c.area() << std::endl;
    std::cout << "RegularPolygon Perimeter: " << r.perimeter() << ", Area: " << r.area() << std::endl;
    std::cout << "Rectangle Perimeter: " << rect.perimeter() << ", Area: " << rect.area() << std::endl;
    std::cout << "Square Perimeter: " << sq.perimeter() << ", Area: " << sq.area() << std::endl;

    return 0;
}


