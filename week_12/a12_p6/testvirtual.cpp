/*CH-230-A
A12p6.c
Erza Dauti
edauti@constructor.university
*/

#include <iostream>
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"

const int num_obj = 7; // Increased to include Square

int main() {
    /* Declaring an array of Area pointers to store different shapes */
    Area *list[num_obj];

    /* Keep track of the current position in the array */
    int index = 0;

    /* Variable to store the total area of all objects */
    double sum_area = 0.0;

    /* Creating a Circle object */
    std::cout << "Creating Circle: ";
    Circle red_circle("RED", 8);

    /* Creating a Rectangle object */
    std::cout << "Creating Rectangle: ";
    Rectangle green_rectangle("GREEN", 5, 6);

    /* Creating a Circle object */
    std::cout << "Creating Circle: ";
    Circle yellow_circle("YELLOW", 7);

    /* Creating a Rectangle object */
    std::cout << "Creating Rectangle: ";
    Rectangle black_rectangle("BLACK", 10, 20);

    /* Creating a Ring object with a blue color */
    std::cout << "Creating Ring: ";
    Ring blue_ring("BLUE", 5, 2);

    /* Creating a Ring object */
    std::cout << "Creating Ring: ";
    Ring purple_ring("PURPLE", 100, 5); 

    /* Creating a Square object */
    std::cout << "Creating Square: ";
    Square pink_square("PINK", 4); /

    /* Assigning the objects to the array */
    list[0] = &red_circle;
    list[1] = &green_rectangle;
    list[2] = &yellow_circle;
    list[3] = &black_rectangle;
    list[4] = &blue_ring;
    list[5] = &purple_ring;
    list[6] = &pink_square;

    /* Looping through the array of objects */
    while (index < num_obj) {
        (list[index])->getColor();
        double area = list[index]->calcArea();
        /* Calculate the perimeter */
        double perimeter = list[index]->calcPerimeter(); 
        sum_area += area;
        /* Accumulate perimeter */
        sum_perimeter += perimeter; 
        index++;
    }

    /* Printing the total area and perimeter */
    std::cout << "\nThe total area is " << sum_area << " units " << std::endl;
    std::cout << "The total perimeter is " << sum_perimeter << " units " << std::endl;

    return 0;
}
