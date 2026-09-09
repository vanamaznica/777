#include "Fraction.h"
#include <iostream>
using namespace std;

Fraction::Fraction()
{
    a = 0;
    b = 1;
}

Fraction::Fraction(int x, int y)
{
    a = x;
    b = y;
}

Fraction Fraction::operator+(const Fraction& f)
{
    return Fraction(a * f.b + f.a * b, b * f.b);
}

Fraction Fraction::operator-(const Fraction& f)
{
    return Fraction(a * f.b - f.a * b, b * f.b);
}

Fraction Fraction::operator*(const Fraction& f)
{
    return Fraction(a * f.a, b * f.b);
}

Fraction Fraction::operator/(const Fraction& f)
{
    return Fraction(a * f.b, b * f.a);
}

void Fraction::show()
{
    cout << a << "/" << b << endl;
}