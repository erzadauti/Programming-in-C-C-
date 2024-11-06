/*CH-230-A
A12p3.c
Erza Dauti
edauti@constructor.university
*/

#include "TournamentMember.h"
#include <cstring>

char TournamentMember::location[40] = "Default Location";

TournamentMember::TournamentMember() {
    std::cout << "Default Constructor called." << std::endl;
}

TournamentMember::TournamentMember(const char* fname, const char* lname, const char* dob) {
    std::cout << "Parametric Constructor called." << std::endl;
    strncpy(firstName, fname, sizeof(firstName));
    strncpy(lastName, lname, sizeof(lastName));
    strncpy(dateOfBirth, dob, sizeof(dateOfBirth));
}

TournamentMember::TournamentMember(const TournamentMember& source) {
    std::cout << "Copy Constructor called." << std::endl;
    strncpy(firstName, source.firstName, sizeof(firstName));
    strncpy(lastName, source.lastName, sizeof(lastName));
    strncpy(dateOfBirth, source.dateOfBirth, sizeof(dateOfBirth));
}

// Destructor
TournamentMember::~TournamentMember() {
    std::cout << "Destructor called for " << firstName << " " << lastName << "." << std::endl;
}

// Methods
void TournamentMember::printInfo() const {
    std::cout << "Name: " << firstName << " " << lastName << "\nDOB: " << dateOfBirth << "\nLocation: "
              << location << std::endl;
    // Print additional properties
}

void TournamentMember::changeLocation(const char* newLocation) {
    strncpy(location, newLocation, sizeof(location));
    std::cout << "Location changed to: " << location << std::endl;
}

// Player Class Implementation
// Constructors
Player::Player() : number(0), goalsScored(0), isRightfooted(false) {
    std::cout << "Player Default Constructor called." << std::endl;
}

Player::Player(const char* fname, const char* lname, const char* dob, int num, const std::string& pos, bool rightFooted)
    : TournamentMember(fname, lname, dob), number(num), position(pos), goalsScored(0), isRightfooted(rightFooted) {
    std::cout << "Player Parametric Constructor called." << std::endl;
}

Player::Player(const Player& source) : TournamentMember(source), number(source.number),
                                        position(source.position), goalsScored(source.goalsScored),
                                        isRightfooted(source.isRightfooted) {
    std::cout << "Player Copy Constructor called." << std::endl;
}

// Destructor
Player::~Player() {
    std::cout << "Player Destructor called for player with number " << number << "." << std::endl;
}

// Inline setter methods
void Player::setNumber(int num) {
    number = num;
}

void Player::setPosition(const std::string& pos) {
    position = pos;
}

void Player::setIsRightFooted(bool rightFooted) {
    isRightfooted = rightFooted;
}

// Methods
void Player::printPlayerInfo() const {
    printInfo();
    std::cout << "Number: " << number << "\nPosition: " << position << "\nGoals Scored: " << goalsScored
              << "\nRight footed: " << (isRightfooted ? "Yes" : "No") << std::endl;
}

void Player::incrementGoalsScored() {
    goalsScored++;
}


