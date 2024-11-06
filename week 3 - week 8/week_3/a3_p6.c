*CH-230-A
A3p6.c
Erza Dauti
edauti@constructor.university
*/



#include <stdio.h>

float to_pounds(int kg, int g)
{
    float total_kg = kg + (float)g / 1000;  // Converts grams to kilograms
    float pounds = total_kg * 2.2;  // Converts kilograms to pounds
    return pounds;
}

int main()
{
    int kg, g;
    float result;

    // Prompts and reads the weight in kilograms and grams
    printf("Enter the weight in kilograms: ");
    scanf("%d", &kg);
    printf("Enter the weight in grams: ");
    scanf("%d", &g);

    // Converts the units of mass using the to_pounds function
    result = to_pounds(kg, g);

    // Printing the result of the conversion
    printf("Result of conversion: %06f\n", result);

    return 0;
}
