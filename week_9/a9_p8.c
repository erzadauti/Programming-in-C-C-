/*CH-230-A
A9p8.c
Erza Dauti
edauti@constructor.university
*/


#include <iostream>

/* Subtract the maximum value from all elements of the array */
void subtract_max(int* arr, int n) {
    if (n <= 0) {
        return; 
    }

    int max_val = arr[0];

    /* Find the maximum value in the array */
    for (int i = 1; i < n; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }

    /* Subtract the maximum value from all elements */
    for (int i = 0; i < n; i++) {
        arr[i] -= max_val;
    }
}

/* Deallocate the dynamically allocated array */
void deallocate(int* arr) {
    delete[] arr;
}

int main() {
    int n;

    /* Read the number of elements */
    std::cout << "Enter the number of elements (n): ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Invalid input. Exiting." << std::endl;
        return 1;
    }

    /* Dynamically allocate memory for the array */
    int* arr = new int[n];

    /* Read and store the values of the integer */
    for (int i = 0; i < n; i++) {
        std::cout << "Enter integer value " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    /* Call the subtract_max function */
    subtract_max(arr, n);

    /* Print the modified values of the array */
    std::cout << "Array after subtracting the maximum value: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    /* Deallocate the dynamically allocated array */
    deallocate(arr);

    return 0;
}
