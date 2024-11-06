/*CH-230-A
A3p9.c
Erza Dauti
edauti@constructor.university
*/



#include <stdio.h>

// Function to compute the sum of elements at positions 2 and 5
double sum25(double v[], int n)
{
    if (n < 6)
    {
        printf("Error: Array does not have enough elements \n");
        return -111.0;
    }

    double sum = v[2] + v[5];
    return sum;
}

int main()
{
    int n;

    // Prompts the user for input
    printf("Enter the number of elements (up to 20): ");
    scanf("%d", &n);

    // Input validation
    if (n < 1 || n > 20)
    {
        printf("Invalid number of elements \n");
        return 1; // Exits with an error code
    }

    double values[20];

    // Inputs values into the array
    printf("Enter %d double values:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &values[i]);
    }

    // Call the sum25 function in order to compute the sum at positions 2 and 5
    double result = sum25(values, n);

    // Prints the result
    printf("sum=%06lf\n", result);

    return 0;
}