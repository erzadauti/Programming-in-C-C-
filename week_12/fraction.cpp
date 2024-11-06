/*CH-230-A
A12p4.c
Erza Dauti
edauti@constructor.university
*/


// fraction.cpp
#include "fraction.h"

Fraction::Fraction()
{
    num = 1;
    den = 1;
}

Fraction::Fraction(int n, int d)
{
    int tmp_gcd = gcd(n, d);

    num = n / tmp_gcd;
    den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int Fraction::lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

void Fraction::print() const
{
    std::cout << num << "/" << den;
}

std::ostream& operator<<(std::ostream& out, const Fraction& fraction)
{
    out << fraction.num << "/" << fraction.den;
    return out;
}

std::istream& operator>>(std::istream& in, Fraction& fraction)
{
    in >> fraction.num >> fraction.den;
    return in;
}

Fraction Fraction::operator*(const Fraction& other) const
{
    return Fraction(num * other.num, den * other.den);
}

Fraction Fraction::operator/(const Fraction& other) const
{
    return Fraction(num * other.den, den * other.num);
}
