/*CH-230-A
A9p4.c
Erza Dauti
edauti@constructor.university
*/


#include <iostream>
#include <string>

/* Calculating the difference between two integers */
int mycount(int a, int b) {
    return b - a;
}

/* Counts the occurrences of a character in a string */
int mycount(char c, const std::string& str) {
    int count = 0;
    for (char ch : str) {
        if (ch == c) {
            count++;
        }
    }
    return count;
}

int main() {
    /* Using the functions above */
    int result1 = mycount(7, 3); 
    int result2 = mycount('i', "this is a string"); 

    /* Display the results */
    std::cout << "mycount(7, 3) returns: " << result1 << std::endl;
    std::cout << "mycount('i', \"this is a string\") returns: " << result2 << std::endl;

    return 0;
}
