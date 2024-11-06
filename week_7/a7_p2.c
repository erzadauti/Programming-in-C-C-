/*CH-230-A
A7p2.c
Erza Dauti
edauti@constructor.university
*/


#include <stdio.h>
#include <stdlib.h>

/* Define a structure for a doubly linked list node that holds a character */
struct Node {
    char data;
    struct Node* prev;
    struct Node* next;
};

/* Initialize the head and tail pointers for the linked list */
struct Node* head = NULL;
struct Node* tail = NULL;

/* Add a new character to the front of the list */
void addToFront(char character) {
    /* Create a new node */
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = character;
    newNode->prev = NULL;
    newNode->next = head;

    /* Update the previous pointer of the old head to point to the new node */
    if (head != NULL) {
        head->prev = newNode;
    }

    /* Update the head pointer to point to the new node */
    head = newNode;

    /* If the list was empty, update the tail pointer as well */
    if (tail == NULL) {
        tail = newNode;
    }
}

/* Remove all nodes with a given character */
void removeCharacters(char character) {
    struct Node* current = head;
    while (current != NULL) {
        if (current->data == character) {
            /* Save a reference to the node to be deleted */
            struct Node* toDelete = current;

            /* Update the next and previous pointers to skip the node to be deleted */
            if (current->prev != NULL) {
                current->prev->next = current->next;
            } else {
                head = current->next;
            }
            if (current->next != NULL) {
                current->next->prev = current->prev;
            } else {
                tail = current->prev;
            }

            /* Move to the next node and free the deleted node */
            current = current->next;
            free(toDelete);
        } else {
            current = current->next;
        }
    }
}

/* Print the current list */
void printList() {
    struct Node* current = head;
    while (current != NULL) {
        printf("%c ", current->data);
        current = current->next;
    }
    printf("\n");
}

/* Print the elements of the list backwards */
void printListBackwards() {
    struct Node* current = tail;
    while (current != NULL) {
        printf("%c ", current->data);
        current = current->prev;
    }
    printf("\n");
}

/* Free the memory used by the list and reset the pointers */
void clearList() {
    struct Node* current = head;
    while (current != NULL) {
        /* Save a reference to the current node and move to the next node */
        struct Node* toDelete = current;
        current = current->next;

        free(toDelete);
    }
    head = NULL;
    tail = NULL;
}

int main() {
    int command;
    char character;

    while (1) {
        scanf("%d", &command);

        switch (command) {
            case 1:
                /* Adds a character to the front of the list */
                scanf(" %c", &character);
                addToFront(character);
                break;
            case 2:
                /* Removes all nodes with the given character */
                scanf(" %c", &character);
                removeCharacters(character);
                break;
            case 3:
              /* Print the list */
                printList();
                break;
            case 4:
                /* Print the elements from the list backwards */
                printListBackwards();
                break;
            case 5:
                /* Free the memory */
                clearList();
                exit(0);
                break;
            default:
                printf("Invalid command\n");
                break;
        }
    }

    return 0;
}



