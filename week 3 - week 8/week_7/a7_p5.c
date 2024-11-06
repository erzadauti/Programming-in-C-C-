/*CH-230-A
A7p5.c
Erza Dauti
edauti@constructor.university
*/


#include <stdio.h>
#include <stdlib.h>

/* Comparison function for ascending order */
int compareAscending(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

/* Comparison function for descending order */
int compareDescending(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    while (1) {
        char command;
        scanf(" %c", &command);

        if (command == 'e') {
            break; 
        } else if (command == 'a') {
            qsort(arr, n, sizeof(int), compareAscending); 
        } else if (command == 'd') {
            qsort(arr, n, sizeof(int), compareDescending); 
        }

        /* Print the sorted array */
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}