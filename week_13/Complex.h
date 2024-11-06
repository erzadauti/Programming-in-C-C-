/*CH-230-A
A13p2.c
Erza Dauti
edauti@constructor.university
*/

#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex();  
    Complex(double real, double imaginary);  

    Complex operator+(const Complex& other) const;
    Complex operator-(const Complex& other) const;
    Complex operator*(const Complex& other) const;
    bool operator==(const Complex& other) const;
    Complex& operator=(const Complex& other);

    friend std::istream& operator>>(std::istream& in, Complex& complex);
    friend std::ostream& operator<<(std::ostream& out, const Complex& complex);
};

#endif
