/*CH-230-A
A12p1.c
Erza Dauti
edauti@constructor.university
*/

// testHexagon.cpp

#include "Shapes.h"
#include <iostream>

int main() {
    Hexagon blueHexagon("BlueHexagon", 0, 0, 6, 9, "Blue");
    Hexagon greenHexagon("GreenHexagon", 0, 0, 6, 15, "Green");

    Hexagon copyHexagon(greenHexagon); // Copy constructor

    // Print hexagon information
    std::cout << "Blue Hexagon Perimeter: " << blueHexagon.computePerimeter() << std::endl;
    std::cout << "Blue Hexagon Area: " << blueHexagon.computeArea() << std::endl;

    std::cout << "Green Hexagon Perimeter: " << greenHexagon.computePerimeter() << std::endl;
    std::cout << "Green Hexagon Area: " << greenHexagon.computeArea() << std::endl;

    std::cout << "Copied Hexagon Perimeter: " << copyHexagon.computePerimeter() << std::endl;
    std::cout << "Copied Hexagon Area: " << copyHexagon.computeArea() << std::endl;

    return 0;
}

