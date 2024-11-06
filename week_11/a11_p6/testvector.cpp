/*CH-230-A
A11p6.c
Erza Dauti
edauti@constructor.university
*/

// testvector.cpp

#include "Vector.h"
#include <iostream>

using namespace std;

int main() {
    Vector v1; 
    Vector v2(3); 
    Vector v3(v2); 
    Vector v4(3); 

    double componentsV2[] = {1.0, 2.0, 3.0};
    double componentsV4[] = {4.0, 5.0, 6.0};
    v2.setComponents(componentsV2, 3);
    v4.setComponents(componentsV4, 3);

    cout << "Vector v1: ";
    v1.print();
    cout << "Vector v2: ";
    v2.print();
    cout << "Vector v3: ";
    v3.print();
    cout << "Vector v4: ";
    v4.print();

    cout << "Norm of v2: " << v2.norm() << endl;

    cout << "Scalar product of v2 and v4: " << v2.scalarProduct(v4) << endl;
    cout << "Sum of v2 and v4: ";
    (v2.add(v4)).print();
    cout << "Difference of v2 and v4: ";
    (v2.subtract(v4)).print();

    return 0;
}
