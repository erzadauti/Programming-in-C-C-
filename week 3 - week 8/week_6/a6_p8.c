/*
CH-230-A
A6p8.c
Erza Dauti
edauti@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

  /* Defines the structure for the list */
struct Node {
    int data;
    struct Node* next;
};

 /* Adding a node at the end of the list */
void appendNode(struct Node** head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}

 /* Adding a node at the beginning of the list */
void insertNode(struct Node** head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = *head;
    *head = newNode;
}

/* Removes the first node from the list */
void removeNode(struct Node** head) {
    if (*head != NULL) {
        struct Node* temp = *head;
        *head = (*head)->next;
        free(temp);
    }
}

 /* Printing the elements from the list */
void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

    /* Free the memory */
void freeList(struct Node** head) {
    struct Node* current = *head;
    while (current != NULL) {
        struct Node* temp = current;
        current = current->next;
        free(temp);
    }
    *head = NULL;
    exit(0);
}

int main() {
    struct Node* head = NULL;
    char choice;
    int value;

    while (1) {
        scanf(" %c", &choice);

        switch (choice) {
            case 'a':
                scanf("%d", &value);
                appendNode(&head, value);
                break;
            case 'b':
                scanf("%d", &value);
                insertNode(&head, value);
                break;
            case 'r':
                removeNode(&head);
                break;
            case 'p':
                printList(head);
                break;
            case 'q':
                freeList(&head);
                break;
            default:
                printf("Invalid input\n");
                break;
        }
    }

    return 0;
}