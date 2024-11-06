/*CH-230-A
A12p5.c
Erza Dauti
edauti@constructor.university
*/

// fraction.h
#ifndef FRACTION_H_
#define FRACTION_H_

#include <iostream>

class Fraction {

private:
    int num;                    
    int den;                    

    int gcd(int a, int b) const;      
    int lcm(int a, int b) const;

public:
    Fraction();                 
    Fraction(int, int = 1);      
                                
    void print() const;         
    friend std::ostream& operator<<(std::ostream& out, const Fraction& fraction);
    friend std::istream& operator>>(std::istream& in, Fraction& fraction);
    Fraction operator*(const Fraction& other) const;
    Fraction operator/(const Fraction& other) const;
    Fraction operator+(const Fraction& other) const;
    Fraction operator-(const Fraction& other) const;
    bool operator<(const Fraction& other) const;
    bool operator>(const Fraction& other) const;
    Fraction& operator=(const Fraction& other);
};

#endif /* FRACTION_H_ */
