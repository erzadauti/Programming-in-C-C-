/*CH-230-A
A11p3.c
Erza Dauti
edauti@constructor.university
*/

// Creature.cpp

#include "Creature.h"

using namespace std;

/* Implementing of Creature class */
Creature::Creature() : distance(10) {
    cout << "Creature constructor. Distance set to 10 meters.\n";
}

Creature::~Creature() {
    cout << "Creature destructor. Object destroyed.\n";
}

void Creature::run() const {
    cout << "Creature running " << distance << " meters!\n";
}

/* Implementing of Wizard class */
Wizard::Wizard() : distFactor(3) {
    cout << "Wizard constructor. Distance factor set to 3.\n";
}

Wizard::~Wizard() {
    cout << "Wizard destructor. Object destroyed.\n";
}

void Wizard::hover() const {
    cout << "Wizard hovering " << (distFactor * distance) << " meters!\n";
}

/* Implementing of Dinosaur class */
Dinosaur::Dinosaur() : roarVolume(8) {
    cout << "Dinosaur constructor. Roar volume set to 8.\n";
}

Dinosaur::~Dinosaur() {
    cout << "Dinosaur destructor. Object destroyed.\n";
}

void Dinosaur::roar() const {
    cout << "Dinosaur roaring with volume " << roarVolume << "!\n";
}

/* Implementing of Fairy class */
Fairy::Fairy() : spellPower(12) {
    cout << "Fairy constructor. Spell power set to 12.\n";
}

Fairy::~Fairy() {
    cout << "Fairy destructor. Object destroyed.\n";
}

void Fairy::castSpell() const {
    cout << "Fairy casting spell with power " << spellPower << "!\n";
}
