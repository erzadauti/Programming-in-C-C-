/*CH-230-A
A10p8.c
Erza Dauti
edauti@constructor.university
*/


// Complex.cpp

#include "Complex.h"
#include <iostream>

/* Default constructor */
Complex::Complex() : real(0.0), imaginary(0.0) {}

/* Specific values of constructor */
Complex::Complex(double realPart, double imaginaryPart)
    : real(realPart), imaginary(imaginaryPart) {}

Complex::Complex(const Complex& other)
    : real(other.real), imaginary(other.imaginary) {}

Complex::~Complex() {}

/* Set the real and imaginary parts by using setter methods */
void Complex::setReal(double realPart) {
    real = realPart;
}

void Complex::setImaginary(double imaginaryPart) {
    imaginary = imaginaryPart;
}

/* Get the real and imaginary parts */
double Complex::getReal() const {
    return real;
}

double Complex::getImaginary() const {
    return imaginary;
}

/* Mathematical form to print the complex number */
void Complex::print() const {
    std::cout << real;

    /* Determine the sign for the imaginary part */
    if (imaginary >= 0) {
        std::cout << " + " << imaginary << "i";
    } else {
        std::cout << " - " << -imaginary << "i";
    }

    std::cout << std::endl;
}

/* The conjugate */
Complex Complex::conjugate() const {
    // Change the sign of the imaginary part
    return Complex(real, -imaginary);
}

/* Adding two complex numbers */
Complex Complex::add(const Complex& other) const {
    return Complex(real + other.real, imaginary + other.imaginary);
}

/* Subtracting two complex numbers */
Complex Complex::subtract(const Complex& other) const {
    return Complex(real - other.real, imaginary - other.imaginary);
}

/* Multiplication of two complex numbers */
Complex Complex::multiply(const Complex& other) const {
    double resultReal = (real * other.real) - (imaginary * other.imaginary);
    double resultImaginary = (imaginary * other.real) + (real * other.imaginary);
    return Complex(resultReal, resultImaginary);
}





