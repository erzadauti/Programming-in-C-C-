/*CH-230-A
A9p6.c
Erza Dauti
edauti@constructor.university
*/


#include <iostream>

/* Find and return the first positive and even value from an array of integers */
int myfirst(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0 && arr[i] % 2 == 0) {
            return arr[i]; 
        }
    }
    return -1; 
}

/* Find and return the first negative integer element from an array of doubles */
double myfirst(double arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0 && arr[i] == static_cast<int>(arr[i])) {
            return arr[i]; 
        }
    }
    return -1.1; 
}

/* Find and return the first consonant character from an array of characters */
char myfirst(char arr[], int size) {
    for (int i = 0; i < size; i++) {
        char c = arr[i];
        if (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) && 
            c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && 
            c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U') {
            return c; 
        }
    }
    return '0'; 
}

int main() {
    /* Test the data in arrays */
    int intArr[] = {2, 4, 6, 8, 10};
    double doubleArr[] = {3.0, -2.0, 4.5, -5.0};
    char charArr[] = {'a', 'e', 'i', 'o', 'u'};

    /* Call each function with the test data */
    int firstPositiveEven = myfirst(intArr, 5);
    double firstNegativeInt = myfirst(doubleArr, 4);
    char firstConsonant = myfirst(charArr, 5);

    /* Display the results */
    std::cout << "First positive and even value in the integer array: " << firstPositiveEven << std::endl;
    std::cout << "First negative integer in the double array: " << firstNegativeInt << std::endl;
    std::cout << "First consonant in the character array: " << firstConsonant << std::endl;

    return 0;
}
