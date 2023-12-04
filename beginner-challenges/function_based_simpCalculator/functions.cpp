#include "functions.h"
#include <iostream>

double add(double a, double b)
{
    return a + b;
}

double substract(double a, double b)
{
    return a - b;
}

double multiply(double a, double b)
{
    return a * b;
}

double division(double a, double b)
{
    return a / b;
}

double getNumber()
{
    std::cout << "Enter a number: ";
    double a{};
    std::cin >> a;
    return a;
}

char getOp()
{
    std::cout << "Enter a operator: ";
    char x{};
    std::cin >> x;
    return x;
}
