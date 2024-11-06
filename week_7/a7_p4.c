/*CH-230-A
A7p4.c
Erza Dauti
edauti@constructor.university
*/


#include <stdio.h>
#include <ctype.h>
#include <string.h>

/* Print the string in uppercase */
void printUppercase(const char* str) {
    while (*str) {
        putchar(toupper(*str));
        str++;
    }
    printf("\n");
}

/* Print the string in lowercase */
void printLowercase(const char* str) {
    while (*str) {
        putchar(tolower(*str));
        str++;
    }
    printf("\n");
}

/* Swap the case of characters in the string */
void swapCase(const char* str) {
    while (*str) {
        if (islower(*str)) {
            putchar(toupper(*str));
        } else if (isupper(*str)) {
            putchar(tolower(*str));
        } else {
            putchar(*str);
        }
        str++;
    }
    printf("\n");
}

int main() {
    char input[256]; 

    /* Read the input string */
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0'; 

    /* Define an array of function pointers for the commands */
    void (*commands[])(const char*) = {printUppercase, printLowercase, swapCase};

    while (1) {
        int command;
        scanf("%d", &command);
        getchar(); 

        if (command == 4) {
            break; 
        } else if (command >= 1 && command <= 3) {
            /* Execute the command on the input string */
            commands[command - 1](input);
        }
    }

    return 0;
}