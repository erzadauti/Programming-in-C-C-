/*CH-230-A
A10p3.c
Erza Dauti
edauti@constructor.university
*/


// testcity.cpp 

#include <iostream>
#include "City.h"

int main() {
    /* Create instances of the City class */
    City bremen, paris, london;

    /* Use setter method to set data for each city */
    bremen.setName("Bremen");
    bremen.setInhabitants(500000);
    bremen.setMayor("John Doe");
    bremen.setArea(325.3);

    paris.setName("Paris");
    paris.setInhabitants(2200000);
    paris.setMayor("Jane Smith");
    paris.setArea(105.4);

    london.setName("London");
    london.setInhabitants(8900000);
    london.setMayor("Bob Johnson");
    london.setArea(1572.0);

    /* Display the information of each city */
    std::cout << "City Information:" << std::endl;
    std::cout << "Bremen: " << bremen.getName() << ", Population: " << bremen.getInhabitants()
              << ", Mayor: " << bremen.getMayor() << ", Area: " << bremen.getArea() << " km^2" << std::endl;

    std::cout << "Paris: " << paris.getName() << ", Population: " << paris.getInhabitants()
              << ", Mayor: " << paris.getMayor() << ", Area: " << paris.getArea() << " km^2" << std::endl;

    std::cout << "London: " << london.getName() << ", Population: " << london.getInhabitants()
              << ", Mayor: " << london.getMayor() << ", Area: " << london.getArea() << " km^2" << std::endl;

    return 0;
}
