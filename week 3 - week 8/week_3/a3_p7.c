/*CH-230-A
A3p7.c
Erza Dauti
edauti@constructor.university
*/



#include <stdio.h>

// Function to print the trapezoid
void print_form(int n, int m, char c)
{
    int i, j;

    // Looping through each row
    for (i = 0; i < n; i++)
    {
        // Prints spaces before the characters
        for (j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }

        // Prints the characters
        for (j = 0; j < m + i; j++)
        {
            printf("%c", c);
        }

        printf("\n");
    }
}

int main()
{
    int n, m;
    char c;

    // Prompting the user for input
    printf("Enter the height: ");
    scanf("%d", &n);
    printf("Enter the base: ");
    scanf("%d", &m);
    printf("Enter the character: ");
    scanf(" %c", &c);

    // Call the print_form function in order to print the trapezoid
    print_form(n, m, c);

    return 0;
}