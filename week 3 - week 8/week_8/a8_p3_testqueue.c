/* CH-230-A
   A8p3.c
   Erza Dauti
   edauti@constructor.university
*/

#include <stdio.h>
#include "queue.h"

int main()
{
    Queue line;
    Item temp;
    char ch;

    initialize_queue(&line);

    while (((ch = getchar()) != EOF) && (ch != 'q'))
    {
        switch (ch)
        {
        case 'a':
            printf("add int: ");
            scanf("%d", &temp);
            if (!queue_is_full(&line))
            {
                printf("Putting %d into queue\n", temp);
                enqueue(temp, &line);
            }
            else
                puts("Queue is full");
            break;

        case 'd':
            if (queue_is_empty(&line))
            {
                printf("Queue is empty\n"); // Queue is empty message
                break;
            }

            dequeue(&temp, &line);
            printf("Removing %d from queue\n", temp);
            break;

        case 'p': // Print command
            // printf("content_of_the_queue: ");
            printq(&line);
            break;

        default:
            printf("%d items in queue\n", queue_item_count(&line));
            puts("Type a to add, d to delete, p to print, q to quit:");
        }
    }

    if (ch == 'q')
    {
        empty_queue(&line);
        puts("Bye.");
    }

    return 0;
}


