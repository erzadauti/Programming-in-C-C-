/*CH-230-A
A10p3.c
Erza Dauti
edauti@constructor.university
*/


#ifndef CRITTER_H
#define CRITTER_H

#include <string>

class Critter
{
private:
    std::string name;
    int hunger;
    int boredom;
    double height;

public:
    /* Constructors */
    Critter();                       
    Critter(const std::string& name);          
    Critter(const std::string& name, int hunger, int boredom, double height = 10.0); 

    void setName(const std::string& newname);
    void setHunger(int newhunger);
    void setBoredom(int newboredom);
    void setHeight(double newheight);

    std::string getName() const;
    int getHunger() const;
    int getBoredom() const;
    double getHeight() const;

    /* Service method */
    void print() const;
};

#endif // CRITTER_H
