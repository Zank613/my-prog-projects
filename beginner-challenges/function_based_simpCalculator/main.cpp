#include <iostream>

void printCalculation(double x, double y, char op)
{
    if (op == '+') {
        std::cout << x << " + " << y << " is " << (x + y) << '\n';
    }
    else if (op == '-') {
        std::cout << x << " - " << y << " is " << (x - y) << '\n';
    }
    else if (op == '/') {
        std::cout << x << " / " << y << " is " << (x / y) << '\n';
    }
    else if (op == '*') {
        std::cout << x << " * " << y << " is " << (x * y) << '\n';
    }
    else
        std::cout << "Invalid operator";
}

double getNumber ()
{
    std::cout << "Enter a double value: ";
    double value{};
    std::cin >> value;

    return value;
}

int main()
{
    double firstNum = getNumber();
    double secondNum = getNumber();

    std::cout << "Enter one of the following: +, -, /, or *: ";
    char op{};
    std::cin >> op;

    printCalculation(firstNum, secondNum, op);


    return 0;
}
