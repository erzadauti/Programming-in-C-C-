/*CH-230-A
A7p7.c
Erza Dauti
edauti@constructor.university
*/


#include "stack.h"
#include <stdio.h>

int main() {
    struct stack* s = createStack();
    char command;
    int value;

    while (1) {
        scanf(" %c", &command);

        if (command == 's') {
            scanf("%d", &value);
            push(s, value);
        } else if (command == 'p') {
            pop(s);
        } else if (command == 'e') {
            empty(s);
        } else if (command == 'q') {
            printf("Quit\n");
            break;
        }
    }

    destroyStack(s);

    return 0;
}



