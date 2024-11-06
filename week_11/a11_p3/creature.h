/*CH-230-A
A11p3.c
Erza Dauti
edauti@constructor.university
*/


// Creature.h

#ifndef CREATURE_H
#define CREATURE_H

#include <iostream>

class Creature {
public:
    Creature();
    virtual ~Creature();
    void run() const;

protected:
    int distance;
};

class Wizard : public Creature {
public:
    Wizard();
    ~Wizard();
    void hover() const;

private:
    int distFactor;
};

class Dinosaur : public Creature {
public:
    Dinosaur();
    ~Dinosaur();
    void roar() const;

private:
    int roarVolume;
};

class Fairy : public Creature {
public:
    Fairy();
    ~Fairy();
    void castSpell() const;

private:
    int spellPower;
};

#endif // CREATURE_H
