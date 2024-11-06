/*CH-230-A
A10p5.c
Erza Dauti
edauti@constructor.university
*/


// Critter.h

#ifndef CRITTER_H
#define CRITTER_H

#include <string>

class Critter
{
private:
    std::string name;
    double hunger; 
    int boredom;
    double height;

    /* Conversions using private helper methods */
    double convertToDouble(int hungerLevel) const; 
    int convertToInt(double hungerPercentage) const; 

public:
    Critter();
    Critter(const std::string& name);
    Critter(const std::string& name, int hunger, int boredom, double height = 10.0);

    void setName(const std::string& newname);
    void setHunger(int newhunger);
    void setBoredom(int newboredom);
    void setHeight(double newheight);

    std::string getName() const;
    double getHunger() const;
    int getBoredom() const;
    double getHeight() const;
    
    void print() const;
};

#endif // CRITTER_H
