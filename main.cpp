#include <iostream>
#include "Complex.h"
#include "fraction.h"
using namespace std;

int main()
{
    Fraction a(1, 2), b(1, 3);
    Fraction c;

    c = a + b;
    c.show();
    c = a - b;
    c.show();
    c = a * b;
    c.show();
    c = a / b;
    c.show();

    Complex x(2, 3), y(1, 2);
    Complex z;

    z = x + y;
    z.show();
    z = x - y;
    z.show();
    z = x * y;
    z.show();
    z = x / y;
    z.show();
}