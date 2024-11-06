/*CH-230-A
A12p3.c
Erza Dauti
edauti@constructor.university
*/


#include "TournamentMember.h"

int main() {
    Player firstPlayer("First", "Player", "1990-05-15", 10, "Forward", true);
    firstPlayer.printPlayerInfo();

    Player player2 = firstPlayer; 
    player2.changeLocation("Hamburg");

    Player player3;
    player3 = firstPlayer; 
    player3.changeLocation("Hamburg");

    firstPlayer.incrementGoalsScored();

    firstPlayer.printPlayerInfo();

    return 0;
}

