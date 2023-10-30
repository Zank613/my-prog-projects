#include <iostream>

int main()
{
    std::cout << "Enter an integer: \n";
    int x{ }; //the first integer
    std::cin >> x;

    std::cout << "Enter another integer: \n";
    int y{ }; //the second integer
    std::cin >> y;

    std::cout << x << " + " << y << " is " << x + y << ".\n"; // adding two integer, x + y
    std::cout << x << " - " << y << " is " << x - y << ".\n"; // substracting two integers, x - y

    return 0;
}
