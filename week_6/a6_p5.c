/*
CH-230-A
A6p5.c
Erza Dauti
edauti@jacobs-university.de
*/

#include <stdio.h>

    int main() { 
     /* Read an unsigned character from the input */
       unsigned char c; 
       scanf("%c", &c); 
     /* Print the decimal representation of the unsigned character */
       printf("The decimal representation is: %d\n", c);
   
     /* Print the backwards binary representation of the unsigned character */
       printf("The backwards binary representation is: "); 
       for (int i = 0; i <= 5; i++) { 
    
     /* Move to the rightmost position and check for the presence of 1 */
       unsigned char bit = (c >> i) & 1; 
     
   
    /* Print '1' if the bit is 1, and '0' if it's 0 */
        putchar(bit ? '1' : '0'); 
     
    } 
   
    putchar('\n'); 
    
    return 0; 
    
}