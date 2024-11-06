/*
CH-230-A
A5p8.c
Erza Dauti
edauti@jacobs-university.de
*/


#include <stdio.h>
#include <stdlib.h>

/* Reading a matrix from standard input */
void readMatrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

/* Printing the matrix to standard output */
void printMatrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

/* Multiplication of two matrices */
int** multiplyMatrices(int** matrixA, int** matrixB, int rowsA, int colsA, int colsB) {
    int** result = (int**)malloc(rowsA * sizeof(int*));
    for (int i = 0; i < rowsA; i++) {
        result[i] = (int*)malloc(colsB * sizeof(int));
        for (int j = 0; j < colsB; j++) {
            result[i][j] = 0;
            for (int k = 0; k < colsA; k++) {
                result[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
    return result;
}

int main() {
    int n, m, p;
    scanf("%d%d%d", &n, &m, &p);

    /* Dynamically allocating memory for the matrices */
    int** matrixA = (int**)malloc(n * sizeof(int*));
    int** matrixB = (int**)malloc(m * sizeof(int*));
    for (int i = 0; i < n; i++) {
        matrixA[i] = (int*)malloc(m * sizeof(int));
    }
    for (int i = 0; i < m; i++) {
        matrixB[i] = (int*)malloc(p * sizeof(int));
    }

    /* Reads the elements of the matrices */
    readMatrix(matrixA, n, m);
    readMatrix(matrixB, m, p);

    /* Computing the multiplication of matrices */
    int** result = multiplyMatrices(matrixA, matrixB, n, m, p);

    /* Printing the matrices and the results */
    printf("Matrix A:\n");
    printMatrix(matrixA, n, m);
    printf("Matrix B:\n");
    printMatrix(matrixB, m, p);
    printf("The multiplication result AxB:\n");
    printMatrix(result, n, p);

    /* Deallocatiom of memory */
    for (int i = 0; i < n; i++) {
        free(matrixA[i]);
    }
    for (int i = 0; i < m; i++) {
        free(matrixB[i]);
    }
    free(matrixA);
    free(matrixB);
    for (int i = 0; i < n; i++) {
        free(result[i]);
    }
    free(result);

    return 0;
}
