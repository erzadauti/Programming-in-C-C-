/*CH-230-A
A12p2.c
Erza Dauti
edauti@constructor.university
*/



#include "TournamentMember.h"

int main() {
    TournamentMember player1("John", "Doe", "1990-05-15");
    player1.printInfo();

    TournamentMember player2(player1); 
    player2.changeLocation("New Stadium");

    TournamentMember player3; 
    player3 = player1; 
    player3.changeLocation("Training Ground");

    return 0;
}
