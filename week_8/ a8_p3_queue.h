/*CH-230-A
A8p3.c
Erza Dauti
edauti@constructor.university
*/


/**
 * @file queue.h
 */


#ifndef _QUEUE_H_
#define _QUEUE_H_

// Define the Item and Queue types
typedef int Item;

// Define the Node structure
typedef struct node
{
    Item item;
    struct node *next;
} Node;

typedef struct queue
{
    Node *front;
    Node *rear;
    int items;
} Queue;

/**
 * @brief Print the elements of the queue separated by spaces.
 *
 * Print the elements of the queue separated by spaces. If the queue is empty, it
 * will print "Queue is empty."
 *
 * @param pq The pointer to the queue structure.
 */
void printq(const Queue *pq);

// Function declarations for the missing functions
void initialize_queue(Queue *pq);
int queue_is_full(const Queue *pq);
int queue_is_empty(const Queue *pq);
int queue_item_count(const Queue *pq);
int enqueue(Item item, Queue *pq);
int dequeue(Item *pitem, Queue *pq);
void empty_queue(Queue *pq);


#endif  /* _QUEUE_H_ */

