/*CH-230-A
A7p7.c
Erza Dauti
edauti@constructor.university
*/



#ifndef STACK_H
#define STACK_H

#include <stdbool.h>

struct stack {
    unsigned int count;
    int array[12]; // Container
};

struct stack* createStack();
bool push(struct stack* s, int value);
int pop(struct stack* s);
void empty(struct stack* s);
bool isEmpty(struct stack* s);
void destroyStack(struct stack* s);

#endif


