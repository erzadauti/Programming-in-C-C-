/*
CH-230-A
A6p4.c
Erza Dauti
edauti@jacobs-university.de
*/


#include <stdio.h>

#define INTERMEDIATE 

int main() {
    int n; /* Declare a variable to store the dimension of the vectors */
    scanf("%d", &n); /* Read the dimension from the user */

    int x[n], y[n]; /* Declare arrays to store the components of vectors x and y */
    
    /* Read the components of vector x from the user */
    for (int i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }

    /* Read the components of vector y */
    for (int i = 0; i < n; i++) {
        scanf("%d", &y[i]);
    }
    
    #ifdef INTERMEDIATE
    /* Check if INTERMEDIATE is defined  */
    printf("The intermediate product values are:\n");
    #endif
    
    int scalarProduct = 0; /* Initialize a variable to store the scalar product */
    
    /* Calculate the scalar product */
    for (int i = 0; i < n; i++) {
        int product = x[i] * y[i];
        
        #ifdef INTERMEDIATE
        /* Check if INTERMEDIATE is defined */
        printf("%d\n", product);
        #endif
        
        scalarProduct += product;
    }
    
    #ifndef INTERMEDIATE
    /* Check if INTERMEDIATE is not defined */
    printf("The scalar product is: %d\n", scalarProduct);
    #else
    /* Check if INTERMEDIATE is defined */
    printf("The scalar product is: %d\n", scalarProduct);
    #endif
    
    return 0;
}
