/*CH-230-A
A11p6.c
Erza Dauti
edauti@constructor.university
*/

// Vector.h

#ifndef VECTOR_H
#define VECTOR_H

class Vector {
private:
    int size;
    double* components;

public:
    Vector();
    Vector(int size);
    Vector(const Vector& other);
    ~Vector();

    int getSize() const;
    void setSize(int newSize);
    double* getComponents() const;
    void setComponents(double* newComponents, int newSize);

    void print() const;

    double norm() const;
    double scalarProduct(const Vector& other) const;
    Vector add(const Vector& other) const;
    Vector subtract(const Vector& other) const;
};

#endif // VECTOR_H
