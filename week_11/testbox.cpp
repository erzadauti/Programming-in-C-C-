/*CH-230-A
A11p1.c
Erza Dauti
edauti@constructor.university
*/


// testbox.cpp


#include <iostream>
#include "Box.h"

int main() {
    /* Enter number of boxes */
    int n;
    std::cout << "Enter the number of boxes: ";
    std::cin >> n;

    /* Dynamically create an array of 2 * n boxes */
    Box *boxes = new Box[2 * n];

    /* Enter height, width, and depth for the first n boxes */
    for (int i = 0; i < n; ++i) {
        double h, w, d;
        std::cout << "Enter height for box " << i + 1 << ": ";
        std::cin >> h;
        std::cout << "Enter width for box " << i + 1 << ": ";
        std::cin >> w;
        std::cout << "Enter depth for box " << i + 1 << ": ";
        std::cin >> d;

        boxes[i] = Box(h, w, d); 
    }

    for (int i = 0; i < n; ++i) {
        boxes[n + i] = Box(boxes[i]); 
    }

    /* Loop across all boxes, calculate and then print the volume */
    for (int i = 0; i < 2 * n; ++i) {
        std::cout << "Volume of Box " << i + 1 << ": " << boxes[i].calculateVolume() << std::endl;
    }

    /* Deallocate the dynamically allocated memory */
    delete[] boxes;

    return 0;
}
