/*CH-230-A
A13p2.c
Erza Dauti
edauti@constructor.university
*/

#include "Complex.h"

Complex::Complex() : real(0), imaginary(0) {}

Complex::Complex(double real, double imaginary) : real(real), imaginary(imaginary) {}

Complex Complex::operator+(const Complex& other) const {
    return Complex(real + other.real, imaginary + other.imaginary);
}

Complex Complex::operator-(const Complex& other) const {
    return Complex(real - other.real, imaginary - other.imaginary);
}

Complex Complex::operator*(const Complex& other) const {
    return Complex(real * other.real - imaginary * other.imaginary,
                   real * other.imaginary + imaginary * other.real);
}

bool Complex::operator==(const Complex& other) const {
    return (real == other.real) && (imaginary == other.imaginary);
}

Complex& Complex::operator=(const Complex& other) {
    if (this != &other) {
        real = other.real;
        imaginary = other.imaginary;
    }
    return *this;
}

std::istream& operator>>(std::istream& in, Complex& complex) {
    in >> complex.real >> complex.imaginary;
    return in;
}

std::ostream& operator<<(std::ostream& out, const Complex& complex) {
    out << complex.real;
    if (complex.imaginary >= 0) {
        out << " + " << complex.imaginary << "i";
    } else {
        out << " - " << -complex.imaginary << "i";
    }
    return out;
}
