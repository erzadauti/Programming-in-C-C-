/*CH-230-A
A11p6.c
Erza Dauti
edauti@constructor.university
*/


// Vector.cpp

#include "Vector.h"
#include <iostream>
#include <cmath>

using namespace std;

/* Constructors */
Vector::Vector() : size(0), components(nullptr) {}

Vector::Vector(int size) : size(size) {
    components = new double[size];
    for (int i = 0; i < size; ++i) {
        components[i] = 0.0;
    }
}

Vector::Vector(const Vector& other) : size(other.size) {
    components = new double[size];
    for (int i = 0; i < size; ++i) {
        components[i] = other.components[i];
    }
}

/* Destructor */
Vector::~Vector() {
    delete[] components;
}

/* Getter and Setter methods */
int Vector::getSize() const {
    return size;
}

void Vector::setSize(int newSize) {
    size = newSize;
}

double* Vector::getComponents() const {
    return components;
}

void Vector::setComponents(double* newComponents, int newSize) {
    delete[] components;

    /* Allocate new memory */
    size = newSize;
    components = new double[size];
    for (int i = 0; i < size; ++i) {
        components[i] = newComponents[i];
    }
}

/* Print method */
void Vector::print() const {
    for (int i = 0; i < size; ++i) {
        cout << components[i] << " ";
    }
    cout << endl;
}

double Vector::norm() const {
    double result = 0.0;
    for (int i = 0; i < size; ++i) {
        result += components[i] * components[i];
    }
    return sqrt(result);
}

double Vector::scalarProduct(const Vector& other) const {
    double result = 0.0;
    for (int i = 0; i < size; ++i) {
        result += components[i] * other.components[i];
    }
    return result;
}

Vector Vector::add(const Vector& other) const {
    Vector result(size);
    for (int i = 0; i < size; ++i) {
        result.components[i] = components[i] + other.components[i];
    }
    return result;
}

Vector Vector::subtract(const Vector& other) const {
    Vector result(size);
    for (int i = 0; i < size; ++i) {
        result.components[i] = components[i] - other.components[i];
    }
    return result;
}
