/*
CH-230-A
A5p9.c
Erza Dauti
edauti@jacobs-university.de
*/


#include <stdio.h>
#include <stdlib.h>

/* Reading the elements of the 3D array from standard input */
void read3DArray(int*** array, int rows, int cols, int depth) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            for (int k = 0; k < depth; k++) {
                scanf("%d", &array[i][j][k]);
            }
        }
    }
}

/* Printing the 2D sections parallel to the "XOY axis" */
void print2DSections(int*** array, int rows, int cols, int depth) {
    for (int k = 0; k < depth; k++) {
        printf("Section %d:\n", k + 1);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                printf("%d ", array[i][j][k]);
            }
            printf("\n");
        }
    }
}

int main() {
    int rows, cols, depth;
    scanf("%d%d%d", &rows, &cols, &depth);

    /* Dynamically allocating memory for the 3D array */
    int*** array = (int***)malloc(rows * sizeof(int**));
    if (array == NULL){
        printf("Error in allocating memory");
    }
    for (int i = 0; i < rows; i++) {
        array[i] = (int**)malloc(cols * sizeof(int*));
        if (array[i]== NULL){
            printf("Error in allocating memory");
        }
        for (int j = 0; j < cols; j++) {
            array[i][j] = (int*)malloc(depth * sizeof(int));
            if(array[i][j] == NULL){
                printf("Error in allocating memory");
            }
        }
    }

    /* Reads the elements of the 3D array */
    read3DArray(array, rows, cols, depth);

    /* Print the 2D sections parallel to the "XOY axis" */
    print2DSections(array, rows, cols, depth);

    /* Deallocating memory */
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            free(array[i][j]);
        }
        free(array[i]);
    }
    free(array);

    return 0;
}