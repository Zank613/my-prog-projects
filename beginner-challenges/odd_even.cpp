#include <iostream>


int getNumber()
{
    int num{};
    std::cout << "Enter a number: ";
    std::cin >> num;

    return num;
}

bool isEven(int num)
{
    if (num % 2 == 0){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int num1 {getNumber()};

    std::cout << num1 << " is " << ( (isEven(num1)) ? "even" : "odd" ) << '\n';

    return 0;
}
