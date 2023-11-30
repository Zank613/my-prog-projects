#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter your name: ";
    std::string name{};
    std::getline(std::cin >> std::ws, name); //read a full line of text into name
    std::cout << "Enter your age: ";
    int age{}; //age is an integer so we can do math with it
    std::cin >> age;
    //age is signed and name.length() is unsigned so we need to change name.length() to avoid errors
    int length{ static_cast<int>(name.length()) }; //converts the name.lenght() into a signed value, for simplicity this counts the all whitespaces as well

    std::cout << "Your age + length of the name is: " << age + length << '\n';

    return 0;
}
