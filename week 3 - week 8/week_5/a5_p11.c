/*
CH-230-A
A5p11.c
Erza Dauti
edauti@jacobs-university.de
*/


#include <stdio.h>

/* Checking if a number is prime */
int isPrime(int n, int i) {
    if (n <= 1)
        return 0;
    if (i == 1)
        return 1;

    /* Checking if n is divisible by i  or not */
    if (n % i == 0)
        return 0;

    /* Checking for divisibility with smaller numbers */
    return isPrime(n, i - 1);
}

int main() {
    int x;
    scanf("%d", &x);

    /* Calling the function to check if x is prime */
    if (isPrime(x, x - 1))
        printf("%d is prime\n", x);
    else
        printf("%d is not prime\n", x);

    return 0;
}
