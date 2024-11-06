/*CH-230-A
A13p2.c
Erza Dauti
edauti@constructor.university
*/


#include <iostream>
#include <fstream>
#include "Complex.h"

int main() {
    std::ifstream inFile1("in1.txt");
    std::ifstream inFile2("in2.txt");
    std::ofstream outFile("output.txt");

    if (!inFile1 || !inFile2 || !outFile) {
        std::cerr << "Error: Unable to open input or output files." << std::endl;
        return 1;
    }

    Complex complex1, complex2;

    inFile1 >> complex1;
    inFile2 >> complex2;

    Complex sum = complex1 + complex2;
    Complex diff = complex1 - complex2;
    Complex product = complex1 * complex2;

    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << diff << std::endl;
    std::cout << "Product: " << product << std::endl;

    outFile << "Sum: " << sum << std::endl;
    outFile << "Difference: " << diff << std::endl;
    outFile << "Product: " << product << std::endl;

    return 0;
}
