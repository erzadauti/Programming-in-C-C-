/*CH-230-A
A10p7.c
Erza Dauti
edauti@constructor.university
*/

#include <iostream>
#include <cstring>

using namespace std;

/* A class representing a simple string */
class NaiveString {
private:
/* Pointer to character array storing the string */
    char *str; 

public:
 /* Initializes the string with the given message */
    NaiveString(const char *t) {
        cout << "Constructor invoked: NaiveString(const char*)" << endl;
 /* Memory allocation*/ 
        str = new char[strlen(t) + 1]; 
        strcpy(str, t); 
    }

/* Create a copy of another NaiveString */
    NaiveString(const NaiveString &src) {
        cout << "Copy Constructor invoked: NaiveString(const NaiveString&)" << endl;
        str = new char[strlen(src.str) + 1]; 
        strcpy(str, src.str); 
    }

/* Free the dynamically allocated memory when an object is destroyed */
    ~NaiveString() {
        cout << "Destructor invoked: ~NaiveString()" << endl;
        delete[] str; 
    }

/* Replace occurrences of oldchar with newchar in the string */
    void update(char oldchar, char newchar) {
        unsigned int i;
        for (i = 0; i < strlen(str); i++)
            if (str[i] == oldchar)
                str[i] = newchar;
    }

/* Display the content of the string */
    void print() {
        cout << str << endl;
    }
};

/* Take a NaiveString by value, updates it, and prints the result */
void funcByVal(NaiveString s) {
    cout << "funcByVal() being called" << endl;
    s.update('B', 'C'); 
    s.print(); 
}

/* Take a NaiveString by reference, updates it, and prints the result */
void funcByRef(NaiveString &s) {
    cout << "funcByRef() being called" << endl;
    s.update('B', 'C'); // Update the string content
    s.print(); // Print the updated string
}

/* Create instances of NaiveString and call the functions */
int main(int argc, char **argv) {
    NaiveString a("aBcBdB");
    a.print(); 

    cout << "\nCreating object b using copy constructor" << endl;
    NaiveString b(a); 
    b.print(); 

    cout << "\nCreating object c using default constructor" << endl;
    NaiveString c("xyz"); 
    c.print(); 

    cout << "\nAbout to call funcByVal()" << endl;
    funcByVal(a); 
    a.print(); 

    cout << "\nAbout to call funcByRef()" << endl;
    funcByRef(c); 
    c.print(); 

    return 0; 
}

