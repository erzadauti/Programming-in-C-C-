/*CH-230-A
A7p7.c
Erza Dauti
edauti@constructor.university
*/

#include "stack.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> 

struct stack* createStack() {
    struct stack* s = (struct stack*)malloc(sizeof(struct stack));
    if (s == NULL) {
        fprintf(stderr, "Memory allocation failed. Exiting.\n");
        exit(1);
    }
    s->count = 0;  
    return s;
}

bool push(struct stack* s, int value) {
    if (s->count < 12) {
        s->array[s->count] = value;
        s->count++;
        printf("Pushing %d\n", value);
        return true;
    } else {
        printf("Pushing Stack Overflow\n");
        return true;
    }
} 

int pop(struct stack* s) {
    if (s->count > 0) {
        int value = s->array[s->count-1];
        s->count--;
        printf("Popping %d\n", value);
        return value;
    } else {
        printf("Popping Stack Underflow\n");
        return -1;
    }
}

void empty(struct stack* s) {
    // printf("size = %d\n", s->count);
    if (s->count != 0) {
        printf("Emptying Stack ");
        for (int i = s->count - 1; i >= 0; i--) {
            int value = s->array[i];
            printf("%d ", value);
        }
        printf("\n");
        s->count = 0;
        
    } else {
        printf("Emptying Stack\n");
    }
}

bool isEmpty(struct stack* s) {
    return (s->count == 0);
}

void destroyStack(struct stack* s) {
    free(s);
}


