#include <iostream>
#include "io.h"

int readNumber()
{
    int number{};
    std::cout << "Enter an integer: ";
    std::cin >> number;

    return number;
}


void writeAnswer(int a)
{
    std::cout << "The answer is : " << a << ".";
}
