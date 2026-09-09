#pragma once
class Fraction
{
private:
    int a;
    int b;

public:
    Fraction();
    Fraction(int x, int y);

    Fraction operator+(const Fraction& f);
    Fraction operator-(const Fraction& f);
    Fraction operator*(const Fraction& f);
    Fraction operator/(const Fraction& f);

    void show();
};