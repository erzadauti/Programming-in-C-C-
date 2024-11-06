/*
CH-230-A
A5p7.c
Erza Dauti
edauti@jacobs-university.de
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str1[101]; /* Assuming the first string has a maximum length of 100 characters */
    char str2[101]; /* Assuming the second string has a maximum length of 100 characters */

    /* Reads from standard input the first string */
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; 

    /* Reads from standard input the second string */
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; 
 
    /* Calculates the length of the concatenated string */
    int totalLength = strlen(str1) + strlen(str2);

    /* Dynamically allocatimg memory for the concatenated string */
    char *result = (char *)malloc((totalLength + 1) * sizeof(char)); 

    /* Checking whether the memory allocation was successful */
    if (result == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    /* Copies the first string to the result */
    strcpy(result, str1);

    /* Concatenating the second string to the result */
    strcat(result, str2);

    /* Prints the result */
    printf("Result of concatenation: %s\n", result);

    /* Free the dynamically allocated memory */
    free(result);

    return 0;
}
