#include <iostream>

int main()
{
    std::cout << "Enter a number: ";
    int value{};
    std::cin >> value;

    if(value == 0 || value == 1){
        std::cout << "You picked 0 or 1\n";
    }
    else{
        std::cout << "You did not pick 0 or 1\n";
    }
    return 0;
}
