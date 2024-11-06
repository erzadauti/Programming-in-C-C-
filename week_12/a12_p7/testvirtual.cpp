/*CH-230-A
A12p5.c
Erza Dauti
edauti@constructor.university
*/


#include <iostream>
#include <random>
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"

const int num_obj = 25;

/* Generate a random color */
std::string getRandomColor() {
    std::vector<std::string> colors = {"RED", "BLACK", "VIOLET", "BLUE"};
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, colors.size() - 1);
    return colors[dis(gen)];
}

/* Generate a random size between 5 and 100 */
double getRandomSize() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> dis(5.0, 100.0);
    return dis(gen);
}

int main() {
    Area *list[num_obj];
    int index = 0;

    double sum_area = 0.0;
    double sum_perimeter = 0.0;

    /* Creating 25 random objects */
    for (int i = 0; i < num_obj; ++i) {
        std::string color = getRandomColor();
        double size = getRandomSize();

        /* Choosing randomly between Circle, Ring, Rectangle, or Square */
        int shapeType = rand() % 4;

        switch (shapeType) {
            case 0:
                list[i] = new Circle(color.c_str(), size);
                break;
            case 1:
                list[i] = new Ring(color.c_str(), size, getRandomSize());
                break;
            case 2:
                list[i] = new Rectangle(color.c_str(), size, getRandomSize());
                break;
            case 3:
                list[i] = new Square(color.c_str(), size);
                break;
        }
    }

    /* Looping through the array of objects */
    for (int i = 0; i < num_obj; ++i) {
        list[i]->getColor();
        double area = list[i]->calcArea();
        double perimeter = list[i]->calcPerimeter();
        sum_area += area;
        sum_perimeter += perimeter;

        std::cout << "Area: " << area << " units, Perimeter: " << perimeter << " units\n";
    }

    /* Printing the total area and perimeter */
    std::cout << "\nThe total area is " << sum_area << " units " << std::endl;
    std::cout << "The total perimeter is " << sum_perimeter << " units " << std::endl;

    /* Deallocation of memory */
    for (int i = 0; i < num_obj; ++i) {
        delete list[i];
    }

    return 0;
}
