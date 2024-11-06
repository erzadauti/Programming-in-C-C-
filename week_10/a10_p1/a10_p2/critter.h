/*
CH-230-A
A10p2.c
Erza Dauti
edauti@jacobs-university.de
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
    /* New properties of the critter */
    int age;
    std::string color;

public:
    /* Setter methods to set the properties */
    void setName(std::string& newname);  
    void setHunger(int newhunger);  
    void setBoredom(int newboredom);  
    void setAge(int newage);  
    void setColor(std::string& newcolor);  

    /* Getter methods */
    int getHunger(); 
    int getAge();  
    std::string getColor();  
    
    // Print information about the critter
    void print();  
};

#endif // CRITTER_H

