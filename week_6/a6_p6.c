/*
CH-230-A
A6p6.c
Erza Dauti
edauti@jacobs-university.de
*/

#include <stdio.h>

int main() {
    unsigned char input;

    /* Reads the unsigned char from standard input */
    if (scanf("%c", &input) == 1) {
        printf("The decimal representation is: %d\n", (int)input);

        /* Printing the binary representation is */
        printf("The binary representation is: ");
        
        /* Loops through the bits starting from left to right */
        for (int i = 7; i >= 0; i--) {
            /* Using bitwise operators */
            int bit = (input >> i) & 1;
            printf("%d", bit);
        }
        
        printf("\n");
    } else {
        printf("Invalid input\n");
    }

    return 0;
}