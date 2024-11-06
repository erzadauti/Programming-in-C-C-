/*
CH-230-A
A6p1.c
Erza Dauti
edauti@jacobs-university.de
*/


#include <stdio.h>

#define SWAP(variable1, variable2, type) { \
    type temp = variable1; \
    variable1 = variable2; \
    variable2 = temp; \
}

int main() {
    int int1, int2;
    double double1, double2;

    // Reads integers and doubles
    scanf("%d", &int1);
    scanf("%d", &int2);
    scanf("%lf", &double1);
    scanf("%lf", &double2);

    // Swaps the values by using the SWAP macro 
    SWAP(int1, int2, int);
    SWAP(double1, double2, double);

    // Print the swapped values with floating-point precision 
    printf("After swapping:\n");
    printf("%d\n", int1);
    printf("%d\n", int2);
    printf("%06lf\n", double1);
    printf("%06lf\n", double2);

    return 0;
}