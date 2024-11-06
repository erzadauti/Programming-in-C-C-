/*CH-230-A
A8p2.c
Erza Dauti
edauti@constructor.university
*/

/**
 * @file queue.c
 */

#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

void initialize_queue(Queue *pq)
{
    pq->front = pq->rear = NULL;
    pq->items = 0;
}

int queue_is_full(const Queue *pq)
{
    return pq->items == MAXQUEUE;
}

int queue_is_empty(const Queue *pq)
{
    return pq->items == 0;
}

int queue_item_count(const Queue *pq)
{
    return pq->items;
}

int enqueue(Item item, Queue *pq)
{
    if (queue_is_full(pq))
    {
        fprintf(stderr, "Queue is full. Cannot enqueue.\n");
        return -1;
    }

    Node *new_node = (Node *)malloc(sizeof(Node));
    if (new_node == NULL)
    {
        fprintf(stderr, "Memory allocation failed. Cannot enqueue.\n");
        return -1;
    }

    new_node->item = item;
    new_node->next = NULL;

    if (queue_is_empty(pq))
    {
        pq->front = new_node;
        pq->rear = new_node;
    }
    else
    {
        pq->rear->next = new_node;
        pq->rear = new_node;
    }

    pq->items++;

    printf("add int: Putting %d into queue\n", item);
    printf("%d items in queue\n", pq->items);
    printf("Type a to add, d to delete, q to quit:\n");

    return 0;
}

int dequeue(Item *pitem, Queue *pq)
{
    if (queue_is_empty(pq))
    {
        printf("Queue is empty.\n");
        return -1; // Indicates underflow
    }

    Node *temp = pq->front;  
    *pitem = temp->item;     
    pq->front = pq->front->next; 

    // Update rear if the queue becomes empty
    if (pq->front == NULL)
    {
        pq->rear = NULL;
    }

    free(temp);  // Free the memory 
    pq->items--;

    printf("Removing %d from queue\n", *pitem);
    printf("%d items in queue\n", pq->items);
    printf("Type a to add, d to delete, q to quit:\n");

    return 0; 
}

void empty_queue(Queue *pq)
{
    Item dummy;
    while (!queue_is_empty(pq))
    {
        dequeue(&dummy, pq);
    }
}