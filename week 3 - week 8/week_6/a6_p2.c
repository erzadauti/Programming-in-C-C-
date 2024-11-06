/*
CH-230-A
A6p2.c
Erza Dauti
edauti@jacobs-university.de
*/


#include <stdio.h>

/* Determening the least significant bit by using a macro */
#define LEAST_SIGNIFICANT_BIT(x) (x & 1)

int main() {
    unsigned char input;
    
    /* Reads the unsigned char from the standard input */
    if (scanf("%c", &input) == 1) {
        printf("The decimal representation is: %d\n", (int)input);
        
        /* Uses the macro to determine and print the least significant bit */
        int lsb = LEAST_SIGNIFICANT_BIT(input);
        printf("The least significant bit is: %d\n", lsb);
    } else {
        printf("Invalid input\n");
    }
    
    return 0;
}
