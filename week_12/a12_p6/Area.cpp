/*CH-230-A
A12p6.c
Erza Dauti
edauti@constructor.university
*/


#include <iostream>
#include <cstring>
#include "Area.h"

Area::Area(const char* n) {
    strncpy(color, n, 10);
    std::cout << "Area constructor being called\n";
}

Area::~Area() {
}

void Area::getColor() const {
    std::cout << "\n" << color << ": ";
}
