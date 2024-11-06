/*CH-230-A
A3p3.c
Erza Dauti
edauti@constructor.university
*/



#include <stdio.h>

// This function converts cm to km and returns the result as a float
float convert(int cm)
{
    // Converting cm to km (1 km = 100,000 cm)
    float km = cm / 100000.0;
    return km;
}

int main()
{
    int cm;

    // Getting user input for length in cm
    printf("Enter a length in centimeters: ");
    scanf("%d", &cm);

    // Calls the function to perform the conversion
    float result = convert(cm);

    // Printing the result on a new line
    printf("Result of conversion: %f km\n", result);

    return 0;
}