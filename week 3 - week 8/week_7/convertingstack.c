/*CH-230-A
A8p4.c
Erza Dauti
edauti@constructor.university
*/

/* main.c */
#include "stack.h"
#include <stdio.h>

int main() {
    struct stack* s = createStack();
    unsigned int decimal;
    
    scanf("%u", &decimal);
    
    if (decimal == 0) {
        push(s, 0);
    } else {
        while (decimal > 0) {
            push(s, decimal);
            decimal /= 2;
        }
    }

    printf("The binary representation of %u is ", decimal);

    while (!isEmpty(s)) {
        printf("%u", pop(s));
    }

    printf("\n");

    destroyStack(s);

    return 0;
}
