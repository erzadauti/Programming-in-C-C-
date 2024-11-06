/*
CH-230-A
A5p4.c
Erza Dauti
edauti@jacobs-university.de
*/


#include <stdio.h>
#include <stdlib.h>  

void divby5(float arr[], int size) {
    int a;
    for (a = 0; a < size; a++) {
        arr[a] = arr[a] / 5;
    }
}

int main() {
    int b, idx;
    int z, d;
    printf("Enter an integer: ");
    scanf("%d", &b);

    float *array;  
    array = (float *)malloc(sizeof(float) * b);

    for (idx = 0; idx < b; idx++) {
        scanf("%f", &array[idx]);
    }

    printf("Before:\n");
    for (z = 0; z < b; z++) {
        printf("%03f ", array[z]);  
    }

    printf("\nAfter:\n");  
    divby5(array, b);
    for (d = 0; d < b; d++) {
        printf("%03f ", array[d]);  
    }

    free(array);

    return 0;
}


