/*CH-230-A
A11p4.c
Erza Dauti
edauti@constructor.university
*/

// dyncreature.cpp

#include "Creature.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    while (true) {
        cout << "Enter a command ('wizard', 'object1', 'object2', or 'quit'): ";
        string command;
        cin >> command;

        if (command == "quit") {
            break;
        } else if (command == "wizard") {
            Wizard* wizardObj = new Wizard;
            wizardObj->run();
            wizardObj->hover();
            delete wizardObj;
        } else if (command == "object1") {
            Dinosaur* dinoObj = new Dinosaur;
            dinoObj->run();
            dinoObj->roar();
            delete dinoObj;
        } else if (command == "object2") {
            Fairy* fairyObj = new Fairy;
            fairyObj->run();
            fairyObj->castSpell();
            delete fairyObj;
        } else {
            cout << "Invalid command. Try again.\n";
        }
    }

    return 0;
}
