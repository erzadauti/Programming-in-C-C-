/*CH-230-A
A11p3.c
Erza Dauti
edauti@constructor.university
*/

// testcreature.cpp

#include "Creature.h"
#include <iostream>  

using namespace std;  

int main() {
    cout << "Creating a Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    cout << "\nCreating a Dinosaur.\n";
    Dinosaur d;
    d.run();
    d.roar();

    cout << "\nCreating a Fairy.\n";
    Fairy f;
    f.run();
    f.castSpell();

    return 0;
}

