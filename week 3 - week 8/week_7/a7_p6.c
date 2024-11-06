/*CH-230-A
A7p6.c
Erza Dauti
edauti@constructor.university
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

struct person {
    char name[30];
    int age;
};

/* Comparison function for sorting by name in ascending order */
int compareByNameAscending(const struct person *a, const struct person *b) {
    return strcmp(a->name, b->name);
}

/* Comparison function for sorting by age in ascending order */
int compareByAgeAscending(const struct person *a, const struct person *b) {
    if (a->age == b->age) {
        return compareByNameAscending(a, b); 
    }
    return a->age - b->age;
}

/* Bubblesort function that takes a comparison function as a parameter */
void bubbleSort(struct person arr[], int n, int (*compare)(const struct person *, const struct person *)) {
    bool swapped;
    do {
        swapped = false;
        for (int i = 1; i < n; i++) {
            if (compare(&arr[i - 1], &arr[i]) > 0) {
                struct person temp = arr[i - 1];
                arr[i - 1] = arr[i];
                arr[i] = temp;
                swapped = true;
            }
        }
    } while (swapped);
}

int main() {
    int n;
    scanf("%d", &n);

    struct person persons[n];
    for (int i = 0; i < n; i++) {
        scanf("%s %d", persons[i].name, &persons[i].age);
    }

    /* Sort the array by name in ascending order */
    bubbleSort(persons, n, compareByNameAscending);
    for (int i = 0; i < n; i++) {
        printf("{%s, %d}; ", persons[i].name, persons[i].age);
    }
    printf("\n");

    /* Sort the array by age in ascending order */
    bubbleSort(persons, n, compareByAgeAscending);
    for (int i = 0; i < n; i++) {
        printf("{%s, %d}; ", persons[i].name, persons[i].age);
    }
    printf("\n");

    return 0;
}