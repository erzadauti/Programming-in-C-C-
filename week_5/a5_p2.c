/*
CH-230-A
A5p2.c
Erza Dauti
edauti@jacobs-university.de
*/


#include <stdio.h>

/* Dividing all elements of an array by 5 */
void divby5(float arr[], int size) {
    int i;

    for (i = 0; i < size; i++) {
        arr[i] /= 5;
    }
}

int main() {
    float arr[] = {5.5, 6.5, 7.75, 8.0, 9.6, 10.36};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i;

    /* Printing the elements of the array before division */
    printf("Before:\n");
    for (i = 0; i < size; i++) {
        printf("%.3f ", arr[i]);
    }
    printf("\n");

    /* Dividing the elements of the array by 5 */
    divby5(arr, size);

    /* Prints the elements of the array after the division */
    printf("After:\n");
    for (i = 0; i < size; i++) {
        printf("%.3f ", arr[i]);
    }
    printf("\n");

    return 0;
}

