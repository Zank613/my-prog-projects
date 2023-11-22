#include <iostream>

int main()
{
    std::cout << "Enter a single character: ";
    char ch1{};
    std::cin >> ch1;

    std::cout << "You entered " << '\'' << ch1 << '\'' << ", which has ASCII code " <<static_cast<int>(ch1) << '\n';

    return 0;
}
