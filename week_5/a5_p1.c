/*
CH-230-A
A5p1.c
Erza Dauti
edauti@jacobs-university.de
*/


#include <stdio.h>

/* Prints the character ch in a triangle form */
void printTriangle(int n, char ch) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%c", ch);
        }
        printf("\n");
    }
}

int main() {
    int n;
    char ch;

    /* Reads input values */
    scanf("%d %c", &n, &ch);

    /* Calling the function to print the triangle */
    printTriangle(n, ch);

    return 0;
}