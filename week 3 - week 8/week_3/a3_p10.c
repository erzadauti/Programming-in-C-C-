/*CH-230-A
A3p10.c
Erza Dauti
edauti@constructor.university
*/



#include <stdio.h>

// Function to return the product of two float values
float product(float a, float b)
{
    return a * b;
}

// Function to return the product of two float values by reference
void productbyref(float a, float b, float* p)
{
    *p = a * b;
}

// Function to modify the values of two floats by reference
void modifybyref(float* a, float* b)
{
    *a += 3;
    *b += 11;
}

int main()
{
    float num1, num2;
    float result1, result2;

    // Reads the values of two floats from the keyboard
    printf("Enter the first float value: ");
    scanf("%f", &num1);
    printf("Enter the second float value: ");
    scanf("%f", &num2);

    // Calls the first function and stores the result
    result1 = product(num1, num2);

    // Calls the second function and store the result
    productbyref(num1, num2, &result2);

    // Calls the third function in order to modify the values by reference
    modifybyref(&num1, &num2);

    // Prints the results
    printf("Result of product function: %02f\n", result1);
    printf("Result of productbyref function: %02f\n", result2);
    printf("Modified values: %02f, %02f\n", num1, num2);

    return 0;
}