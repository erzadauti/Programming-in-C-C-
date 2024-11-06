/*
CH-230-A
A7p1.c
Erza Dauti
edauti@jacobs-university.de
*/

#include <stdio.h>

int main() {
    /* Open the input file */
    FILE *inputFile = fopen("chars.txt", "r");

    if (inputFile == NULL) {
        printf("Failed to open input file.\n");
        return 1;
    }

    /* Reads the two first characters from the input file */
    char char1, char2;
    if (fscanf(inputFile, " %c %c", &char1, &char2) != 2) {
        printf("Failed to read characters from input file.\n");
        fclose(inputFile);
        return 1;
    }

    /* Calculate the sum  of code values of ASCII */
    int sum = char1 + char2;

    /* Close the input file */
    fclose(inputFile);

    /* Open the output file */
    FILE *outputFile = fopen("codesum.txt", "w");

    if (outputFile == NULL) {
        printf("Failed to create or open output file.\n");
        return 1;
    }

    /* Write the sum to the output file */
    fprintf(outputFile, "%d\n", sum);

    fclose(outputFile);

    printf("Sum of ASCII code values written to codesum.txt: %d\n", sum);

    return 0;
}