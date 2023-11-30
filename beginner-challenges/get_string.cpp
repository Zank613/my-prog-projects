#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter your name: ";
    std::string name{};
    std::getline(std::cin >> std::ws, name); //read a full line of text into name

    std::cout << "Enter your favourite color: ";
    std::string color{};
    std::getline(std::cin >> std::ws, color); //read a full line of text into color

    std::cout << "Your name is " << name << " and your favourite color is " << color << '\n';

    return 0;
}
