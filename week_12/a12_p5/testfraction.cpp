/*CH-230-A
A12p5.c
Erza Dauti
edauti@constructor.university
*/

// testfraction.cpp
#include <iostream>
#include "fraction.h"

int main(void)
{
    Fraction a, b, sum, diff;

    std::cout << "Enter the first fraction (numerator denominator): ";
    std::cin >> a;

    std::cout << "Enter the second fraction (numerator denominator): ";
    std::cin >> b;

    if (a > b) {
        std::cout << "The greater fraction is: " << a << std::endl;
    } else if (b > a) {
        std::cout << "The greater fraction is: " << b << std::endl;
    } else {
        std::cout << "Fractions are equal." << std::endl;
    }

    sum = a + b;
    diff = a - b;

    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << diff << std::endl;

    return 0;
}
