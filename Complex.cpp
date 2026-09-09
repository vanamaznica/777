#include "Complex.h"
#include <iostream>
using namespace std;

Complex::Complex()
{
    a = 0;
    b = 0;
}

Complex::Complex(double x, double y)
{
    a = x;
    b = y;
}

Complex Complex::operator+(const Complex& c)
{
    return Complex(a + c.a, b + c.b);
}

Complex Complex::operator-(const Complex& c)
{
    return Complex(a - c.a, b - c.b);
}

Complex Complex::operator*(const Complex& c)
{
    return Complex(a * c.a - b * c.b,
        a * c.b + b * c.a);
}

Complex Complex::operator/(const Complex& c)
{
    double d = c.a * c.a + c.b * c.b;
    return Complex((a * c.a + b * c.b) / d,
        (b * c.a - a * c.b) / d);
}

void Complex::show()
{
    cout << a << " + " << b << "i" << endl;
}