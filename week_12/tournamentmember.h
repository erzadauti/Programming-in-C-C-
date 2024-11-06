/*CH-230-A
A12p2.c
Erza Dauti
edauti@constructor.university
*/


#ifndef TOURNAMENTMEMBER_H
#define TOURNAMENTMEMBER_H

#include <iostream>

class TournamentMember {
private:
    char firstName[36];
    char lastName[36];
    char dateOfBirth[11];
    static char location[50]; 
   

public:
    TournamentMember();
    TournamentMember(const char* fName, const char* lName, const char* dob);
    TournamentMember(const TournamentMember& source); 

    ~TournamentMember();

    const char* getFirstName() const { return firstName; }
    const char* getLastName() const { return lastName; }
    const char* getDateOfBirth() const { return dateOfBirth; }
    static const char* getLocation() { return location; }

    void printInfo() const;
    void changeLocation(const char* newLocation);
};

#endif // TOURNAMENTMEMBER_H
