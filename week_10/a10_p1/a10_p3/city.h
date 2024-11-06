/*CH-230-A
A10p3.c
Erza Dauti
edauti@constructor.university
*/


// City.h -

#ifndef CITY_H
#define CITY_H

#include <string>

class City
{
private:
    std::string name;       
    int inhabitants;        
    std::string mayor;      
    double area;            
    
public: 
    /* Constructor */
    City();

    void setName(const std::string& newName);
    void setInhabitants(int newInhabitants);
    void setMayor(const std::string& newMayor);
    void setArea(double newArea);

    std::string getName() const;
    int getInhabitants() const;
    std::string getMayor() const;
    double getArea() const;
};

#endif // CITY_H
