/*CH-230-A
A3p2.c
Erza Dauti
edauti@constructor.university
*/



#include <stdio.h>

int main()
{
    float x;
    int n;

    // Prompting and reading the value of the float
    printf("Enter a float: ");
    while (scanf("%f", &x) != 1)
    {
        printf("Input is invalid, reenter value\n");
        while (getchar() != '\n') ; // Clearing input buffer
        printf("Enter a float: ");
    }

    // Prompting and reading the value of the integer
    printf("Enter an integer: ");
    while (scanf("%d", &n) != 1 || n < 0)
    {
        printf("Input is invalid, reenter value\n");
        while (getchar() != '\n') ; // Clearing input buffer
        printf("Enter an integer: ");
    }

    // Printing 'x' 'n' times to the screen
    for (int i = 0; i < n; i++)
    {
        printf("%06f\n", x);
    }

    return 0;
}


