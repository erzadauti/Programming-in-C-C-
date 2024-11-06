/*CH-230-A
A11p2.c
Erza Dauti
edauti@constructor.university
*/


#include <iostream>

using namespace std;

/* Base class representing a creature */
class Creature {
public:
    Creature();                 
    virtual ~Creature();         
    void run() const;            

protected:
    int distance;                
};

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

/* Derived class representing a magical wizard */
class Wizard : public Creature {
public:
    Wizard();                    
    ~Wizard();                  
    void hover() const;          
private:
    int distFactor;              
};

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

/* Derived class representing a dinosaur */
class Dinosaur : public Creature {
public:
    Dinosaur();                  
    ~Dinosaur();                 
    void roar() const;          

private:
    int roarVolume;              
};

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

/* Derived class representing a fairy */
class Fairy : public Creature {
public:
    Fairy();                    
    ~Fairy();                    
    void castSpell() const;      

private:
    int spellPower;              
};

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

/* Main program */
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

