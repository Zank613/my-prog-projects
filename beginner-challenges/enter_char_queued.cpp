#include <iostream>

int main()
{
    std::cout << "Enter a character: "; //assume the user enters "ab" or "abc" without quotes.
    char ch1{};

    std::cin >> ch1;
    std::cout << "You entered: " << ch1  << '\n';

    std::cin >> ch1; //std::cin doesnt ask user for input it just gruabs queued input.
    std::cout << "You entered: " << ch1 << '\n';

    return 0;
}
