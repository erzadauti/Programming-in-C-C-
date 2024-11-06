/*
CH-230-A
A5p10.c
Erza Dauti
edauti@jacobs-university.de
*/


#include <stdio.h>

/* Prints the numbers from n to 1 */
void printNumbers(int n) {
    /* If n is less than 1, do nothing (stop recursion) */
    if (n < 1) {
        return;
    }

    /* Printing the current value of n */
    printf("%d ", n);

    /* Recursively calls the function with n-1 */
    printNumbers(n - 1);
}

int main() {
    int n;

    /* Reads a positive integer */
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    /* Checking if n is positive */
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1; 
    }

    /* Calling the function to print numbers from n to 1 */
    printNumbers(n);
    printf("\n");

    return 0;
}