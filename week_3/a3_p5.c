 *CH-230-A
A3p5.c
Erza Dauti
edauti@constructor.university
*/



#include <stdio.h>

int main()
{
    char c;
    int n;
    double temperatures[100];
    double sum = 0.0;
    double average;
    int i;

    // Prompts and reads the character
    printf("Enter a character (s/p/t for sum/print/temperature in Fahrenheit): ");
    scanf(" %c", &c);

    // Prompts and reads the value of the integer
    printf("Enter the number of temperatures: ");
    scanf("%d", &n);

    // Check if the number of temperatures is within the array's bounds
    if (n > 100) {
        printf("Error: Number of temperatures exceeds array size (100)\n");
        return 1; // Exit with an error code
    }

    // Prompts and reads the temperatures
    printf("Enter the temperatures in Celsius:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%lf", &temperatures[i]);
        sum += temperatures[i];
    }

    // Performs the desired operation based on the character entered
    switch (c)
    {
        case 's':
            printf("Sum of temperatures: %lf\n", sum);
            break;
        case 'p':
            printf("List of temperatures:\n");
            for (i = 0; i < n; i++)
            {
                printf("%lf ", temperatures[i]);
            }
            printf("\n");
            break;
        case 't':
            printf("List of temperatures in Fahrenheit:\n");
            for (i = 0; i < n; i++)
            {
                double fahrenheit = (9.0 / 5.0) * temperatures[i] + 32.0;
                printf("%lf ", fahrenheit);
            }
            printf("\n");
            break;
        default:
            average = sum / n;
            printf("Average temperature: %lf\n", average);
            break;
    }

    return 0;
}