/*CH-230-A
A12p2.c
Erza Dauti
edauti@constructor.university
*/

#include "TournamentMember.h"
#include <cstring> 

char TournamentMember::location[50] = "Default Location";

TournamentMember::TournamentMember() {
    std::cout << "Default Constructor called." << std::endl;
}

TournamentMember::TournamentMember(const char* fName, const char* lName, const char* dob) {
    std::cout << "Parametric Constructor called." << std::endl;
    strncpy(firstName, fName, sizeof(firstName));
    strncpy(lastName, lName, sizeof(lastName));
    strncpy(dateOfBirth, dob, sizeof(dateOfBirth));
}

TournamentMember::TournamentMember(const TournamentMember& source) {
    std::cout << "Copy Constructor called." << std::endl;
    strncpy(firstName, source.firstName, sizeof(firstName));
    strncpy(lastName, source.lastName, sizeof(lastName));
    strncpy(dateOfBirth, source.dateOfBirth, sizeof(dateOfBirth));
}

TournamentMember::~TournamentMember() {
    std::cout << "Destructor called for " << firstName << " " << lastName << "." << std::endl;
}

void TournamentMember::printInfo() const {
    std::cout << "Name: " << firstName << " " << lastName << "\nDOB: " << dateOfBirth << "\nLocation: "
              << location << std::endl;
}

void TournamentMember::changeLocation(const char* newLocation) {
    strncpy(location, newLocation, sizeof(location));
    std::cout << "Location changed to: " << location << std::endl;
}

