/*
CH-230-A
A5p5.c
Erza Dauti
edauti@jacobs-university.de
*/


#include <stdio.h>

/* Computes the scalar product of two vectors v and w of length n */
void computeScalarProduct(double v[], double w[], int n) {
    double scalarProduct = 0.0;
    
    /* Loops through the vectors in order to calculate the scalar product */
    for (int i = 0; i < n; i++) {
        scalarProduct += v[i] * w[i];
    }
    
    /* Prints the computed scalar product */
    printf("Scalar product=%06lf\n", scalarProduct);
}

/* Printing the smallest and largest components of a vector v of length n */
void findSmallestAndLargest(double v[], int n) {
    double smallest = v[0];
    double largest = v[0];
    int smallestPos = 0;
    int largestPos = 0;
    
    /* Finds the smallest and largest components */
    for (int i = 1; i < n; i++) {
        if (v[i] < smallest) {
            smallest = v[i];
            smallestPos = i;
        }
        if (v[i] > largest) {
            largest = v[i];
            largestPos = i;
        }
    }
    
    /* Prints the smallest and largest components along with their positions */
    printf("The smallest = %06lf\n", smallest);
    printf("Position of smallest = %d\n", smallestPos);
    printf("The largest = %06lf\n", largest);
    printf("Position of largest = %d\n", largestPos);
}

int main() {
    int n;
    scanf("%d", &n);
    
    double v[n];
    double w[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%lf", &v[i]);
    }
    
    for (int i = 0; i < n; i++) {
        scanf("%lf", &w[i]);
    }
    
    /* Computes the scalar product of vectors v and w */
    computeScalarProduct(v, w, n);
    
    /* Printing the smallest and largest components of vectors v and w */
    findSmallestAndLargest(v, n);
    findSmallestAndLargest(w, n);
    
    return 0;
}