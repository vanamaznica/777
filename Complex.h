#pragma once
class Complex
{
private:
    double a;
    double b;

public:
    Complex();
    Complex(double x, double y);

    Complex operator+(const Complex& c);
    Complex operator-(const Complex& c);
    Complex operator*(const Complex& c);
    Complex operator/(const Complex& c);

    void show();
};