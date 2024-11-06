/*CH-230-A
A9p2.c
Erza Dauti
edauti@constructor.university
*/


#include <iostream>
#include <string>
#include <limits> 


int main() {
    int n;
    double x;
    std::string s;

    /* Prompts the user to enter an integer */
    std::cout << "Enter an integer (n): ";
    std::cin >> n;

    /* Prompt the user to enter a double */
    std::cout << "Enter a double (x): ";
    std::cin >> x;

    /* Prompt the user to enter a string */
    std::cout << "Enter a string (without spaces): ";
    std::cin >> s;

    /* Clear any remaining characters from the input buffer */
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    /* Print the string and double value n times */
    for (int i = 0; i < n; i++) {
        std::cout << s << ":" << x << std::endl;
    }

    return 0;
}


