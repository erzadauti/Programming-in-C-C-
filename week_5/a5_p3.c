/*
CH-230-A
A5p3.c
Erza Dauti
edauti@jacobs-university.de
*/


#include <stdio.h>
#include <string.h>

/* Counts the number of lowercase characters in a string */
int countLower(char* str) {
    int count = 0;
    
    /* Uses a pointer to itirate through the string */
    while (*str != '\0') {
        if (*str >= 'a' && *str <= 'z') {
            count++;
        }
        str++; /* Moves the pointer to the next character */
    }
    
    return count;
}

int main() {
    char input[51];

    while (1) {
        printf("Enter a string (or an empty string to quit): ");
        fgets(input, sizeof(input), stdin);
        
        /* Checking if the input string is empty */
        if (strcmp(input, "\n") == 0) {
            break; /* Exit the loop if the input is empty */
        }

        /* Removes the trailing newline character */
        input[strcspn(input, "\n")] = '\0';

        /* Calling the function and printing the results */
        int lowercaseCount = countLower(input);
        printf("Number of lowercase characters: %d\n", lowercaseCount);
    }

    return 0;
}
