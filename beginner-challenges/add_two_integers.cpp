#include <iostream>

// This project uses functions as a learning phase.
int readNumber()
{
    int number{};
    std::cout << "Enter an integer: ";
    std::cin >> number;

    return number;
}

void writeAnswer(int a)
{
    std::cout << "The answer is : " << a << " .";
}

int main()
{
    int x { readNumber() };
    int y { readNumber() };

    writeAnswer(x+y);
    return 0;
}
