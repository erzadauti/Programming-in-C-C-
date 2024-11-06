/*CH-230-A
A10p8.c
Erza Dauti
edauti@constructor.university
*/


// testcomplex.cpp

#include <iostream>
#include "Complex.h"

int main() {
    /* Read data from the keyboard for the first complex number */
    double real1, imaginary1;
    std::cout << "Enter the real part of the first complex number: ";
    std::cin >> real1;
    std::cout << "Enter the imaginary part of the first complex number: ";
    std::cin >> imaginary1;

    /* First complex number */
    Complex complex1(real1, imaginary1);

    /* Read data from the keyboard for the second complex number */
    double real2, imaginary2;
    std::cout << "Enter the real part of the second complex number: ";
    std::cin >> real2;
    std::cout << "Enter the imaginary part of the second complex number: ";
    std::cin >> imaginary2;

    /* The second complex number */
    Complex complex2(real2, imaginary2);

    /* Conjugate of the first instance */
    Complex conjugateResult = complex1.conjugate();
    std::cout << "Conjugate of the first complex number: ";
    conjugateResult.print();

    /* Adding the two instances */
    Complex sumResult = complex1.add(complex2);
    std::cout << " The sum of two complex numbers: ";
    sumResult.print();

    /* Subtracting the two instances */
    Complex differenceResult = complex2.subtract(complex1);
    std::cout << "The fifference of two complex numbers: ";
    differenceResult.print();
 
    /* Multiplying the two instances */
    Complex multiplicationResult = complex1.multiply(complex2);
    std::cout << "Multiplication of two complex numbers: ";
    multiplicationResult.print();

    return 0;
}

