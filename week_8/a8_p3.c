/*CH-230-A
A8p3.c
Erza Dauti
edauti@constructor.university
*/

#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

#define MAXQUEUE 100 // Define a maximum queue size

// Initialize a new queue
void initialize_queue(Queue *pq)
{
    pq->front = pq->rear = NULL;
    pq->items = 0;
}

// Check if the queue is full
int queue_is_full(const Queue *pq)
{
    return pq->items >= MAXQUEUE;
}

// Check if the queue is empty
int queue_is_empty(const Queue *pq)
{
    return pq->items == 0;
}

// Add an item to the queue
int enqueue(Item item, Queue *pq)
{
    if (queue_is_full(pq))
    {
        fprintf(stderr, "Queue is full. Cannot enqueue.\n");
        return 0; // Indicate failure
    }
    Node *new_node = (Node *)malloc(sizeof(Node));
    if (new_node == NULL)
    {
        fprintf(stderr, "Memory allocation failed. Cannot enqueue.\n");
        return 0; // Indicate failure
    }
    new_node->item = item;
    new_node->next = NULL;
    if (queue_is_empty(pq))
        pq->front = new_node;
    else
        pq->rear->next = new_node;
    pq->rear = new_node;
    pq->items++;
    return 1; // Indicate success
}

// Remove an item from the queue
int dequeue(Item *pitem, Queue *pq)
{
    if (queue_is_empty(pq))
    {
        fprintf(stderr, "Queue is empty. Cannot dequeue.\n");
        return 0; // Indicate failure
    }
    Node *temp = pq->front;
    *pitem = temp->item;
    pq->front = pq->front->next;
    free(temp);
    pq->items--;
    if (pq->items == 0)
        pq->rear = NULL;
    return 1; // Indicate success
}

// Print the elements of the queue
void printq(const Queue *pq)
{
    if (queue_is_empty(pq))
    {
        // printf("Queue is empty\n");
        printf("content of the queue: \n");
    }
    else
    {
        printf("content of the queue: ");
        Node *current = pq->front;
        while (current != NULL)
        {
            printf("%d ", current->item);
            current = current->next;
        }
        printf("\n");
    }
}

// Get the number of items in the queue
int queue_item_count(const Queue *pq)
{
    return pq->items;
}

// Empty the queue by removing all items
void empty_queue(Queue *pq)
{
    while (!queue_is_empty(pq))
    {
        Item dummy;
        dequeue(&dummy, pq);
    }
}