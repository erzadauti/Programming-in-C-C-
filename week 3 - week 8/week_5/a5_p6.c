/*
CH-230-A
A5p6.c
Erza Dauti
edauti@jacobs-university.de
*/


#include <stdio.h>

int main() {
    int length;
    
    /* Reads the length of the array */
    scanf("%d", &length);
    
    /* Declaring an array of floats with a specified length */
    float arr[length];
    
    /* This is reading the elements from the array */
    for (int i = 0; i < length; i++) {
        scanf("%f", &arr[i]);
    }
    
    /* Initializes a pointer at the start of the array */
    float *ptr = arr;
    
    int count = 0; 
    
    /* Uses a pointer and count non-negative values to itirate through the array */
    while (*ptr >= 0) {
        count++;
        ptr++;
    }
    
    /* Printing the number of non-negative values before the first negative value */
    printf("Before the first negative value: %d elements\n", count);
    
    return 0;
}