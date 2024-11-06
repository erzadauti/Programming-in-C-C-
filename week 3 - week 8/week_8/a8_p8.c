/*
CH-230-A
A8p8.c
Erza Dauti
edauti@jacobs-university.de
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char filename[256]; 
    scanf("%255s", filename);

    FILE *file = fopen(filename, "r");

    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    int wordCount = 0;
    int inWord = 0;
    int c;

    while ((c = fgetc(file)) != EOF) {
        if (isspace(c) || c == ',' || c == '?' || c == '!' || c == '.' || c == '\t' || c == '\r' || c == '\n') {
            if (inWord) {
                inWord = 0;
                wordCount++;
            }
        } else {
            inWord = 1;
        }
    }

    /* Check for the last word in case the file does not end with a separator */
    if (inWord) {
        wordCount++;
    }

    fclose(file);

    printf("The file contains %d words.\n", wordCount);

    return 0;
}