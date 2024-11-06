/*CH-230-A
A10p6.c
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
    /* Critter properties*/
    std::string name;
    double hunger; 
    int boredom;
    double height;
    double thirst;  

    /* Private helper methods for conversions */
    double convertToDouble(int hungerLevel) const;
    int convertToInt(double hungerPercentage) const;

public:
    /* Constructors */
    Critter();  
    Critter(const std::string& name); 
    Critter(const std::string& name, int hunger, int boredom, double height = 10.0);  
    Critter(const std::string& name, int hunger, int boredom, double height, double thirst);  

    void setName(const std::string& newname);
    void setHunger(int newhunger);
    void setBoredom(int newboredom);
    void setHeight(double newheight);
    /* Set thirst level using new method*/
    void setThirst(double newthirst);  

    std::string getName() const;
    double getHunger() const;
    int getBoredom() const;
    double getHeight() const;
    /* Get thirst level using new method */
    double getThirst() const;  
    
    void print() const;  
};

#endif // CRITTER_H

