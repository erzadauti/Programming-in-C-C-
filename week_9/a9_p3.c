/*CH-230-A
A9p3.c
Erza Dauti
edauti@constructor.university
*/


#include <stdio.h>

float absoluteValue(float x) {
    if (x < 0) {
        return -x;  /* If x is negative, return its negation */
    } else {
        return x;   /* If x is positive, return itself */
    }
}

int main() {
    float num;

    /* Prompt the user to enter a float */
    printf("Enter a float number: ");
    scanf("%f", &num);

    /* Uses the the absoluteValue function to calculate the absolute value*/
    float absValue = absoluteValue(num);

    // Print the absolute value on the screen
    printf("The absolute value is: %02f\n", absValue);

    return 0;
}
