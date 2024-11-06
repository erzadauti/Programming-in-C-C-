/*CH-230-A
A12p4.c
Erza Dauti
edauti@constructor.university
*/


// testfraction.cpp
#include <iostream>
#include "fraction.h"

int main(void)
{
    Fraction a, b, product, quotient;

    std::cout << "Enter the first fraction (numerator denominator): ";
    std::cin >> a;

    std::cout << "Enter the second fraction (numerator denominator): ";
    std::cin >> b;

    product = a * b;
    quotient = a / b;

    std::cout << "Product: " << product << std::endl;
    std::cout << "Quotient: " << quotient << std::endl;

    return 0;
}
