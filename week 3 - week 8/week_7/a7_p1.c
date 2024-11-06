/*
CH-230-A
A7p1.c
Erza Dauti
edauti@jacobs-university.de
*/

// linked_list.h

#ifndef LINKED_LIST_H
#define LINKED_LIST_H

// Structure for a node in the linked list
struct Node {
    int data;           
    struct Node* next;  
};

// Function declarations for linked list operations
void appendNode(struct Node** head, int value);
void insertNode(struct Node** head, int value);
void removeNode(struct Node** head);
void printList(struct Node* head);
void freeList(struct Node** head);

#endif

// linked_list.c

#include <stdio.h>
#include <stdlib.h>

// Append a node with the given value to the end of the list
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

// Insert a node with the given value at the beginning of the list
void insertNode(struct Node** head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = *head;
    *head = newNode;
}

// Remove the first node from the list
void removeNode(struct Node** head) {
    if (*head != NULL) {
        struct Node* temp = *head;
        *head = (*head)->next;
        free(temp);
    }
}

// Print the elements from the list
void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
}

// Free the memory allocated for the entire list
void freeList(struct Node** head) {
    struct Node* current = *head;
    while (current != NULL) {
        struct Node* temp = current;
        current = current->next;
        free(temp);
    }
    *head = NULL;
}

// use_linked_list.c

#include <stdio.h>

int main() {
    struct Node* head = NULL;  // Initialize the linked list with a null head
    char choice;
    int value;

    // Continuous loop for processing user input
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
