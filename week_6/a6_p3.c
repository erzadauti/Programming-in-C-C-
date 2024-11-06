/*
CH-230-A
A6p3.c
Erza Dauti
edauti@jacobs-university.de
*/


#include <stdio.h>

/* Calculating the minimum of three values  by using a macro */
#define MIN(a, b, c) ((a) < (b) ? ((a) < (c) ? (a) : (c)) : ((b) < (c) ? (b) : (c)))

/* Calculating the maximum of three values */
#define MAX(a, b, c) ((a) > (b) ? ((a) > (c) ? (a) : (c)) : ((b) > (c) ? (b) : (c)))

/* Calculate the mid-range of three values */
#define MID_RANGE(a, b, c) (MIN(a, b, c) + MAX(a, b, c)) / 2.0

int main() {
    int a, b, c;
    float mid_range;

    /* Reads three integers from standard input */
    scanf("%d%d%d", &a, &b, &c);

    /* Macro to calculate the mid-range */
    mid_range = MID_RANGE(a, b, c);

    /* Print the mid-range with a floating point precision */
    printf("The mid-range is: %06f\n", mid_range);

    return 0;
}