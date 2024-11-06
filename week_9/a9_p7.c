/*CH-230-A
A9p7.c
Erza Dauti
edauti@constructor.university
*/



#include <iostream>
using namespace std;

/* Swap two integers */
void swapping(int& a, int& b) {
    int temp = a; 
    a = b;        
    b = temp;     
}

/* Swap two floating-point numbers */
void swapping(float& x, float& y) {
    float temp = x; 
    x = y;          
    y = temp;       
}

/* Swap two pointers to char */
void swapping(const char*& str1, const char*& str2) {
    const char* temp = str1; 
    str1 = str2;             
    str2 = temp;             
}

int main(void) {
    int a = 7, b = 15;
    float x = 3.5, y = 9.2;
    const char* str1 = "One";
    const char* str2 = "Two";

    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;

    /* Call the swapping functions to swap the values */
    swapping(a, b);
    swapping(x, y);
    swapping(str1, str2);

    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;

    return 0;
}
