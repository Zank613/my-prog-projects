#include <iostream>

bool isPrime(int x)
{
    if (x == 2) //if user entered 2, the digit is prime.
        return true;
    else if (x == 3) //if user entered 3, the digit is prime.
        return true;
    else if (x == 5) //if user entered 5, the digit is prime.
        return true;
    else if (x == 7) //if user entered 7, the digit is prime.
        return true;
    else
        return false; //if the user did not enter 2, 3, 5, 7, so digit is not a prime number.

}

int main()
{
    std::cout << "Enter a number 0 through 9: ";
    int x {};
    std::cin >> x;

    if (isPrime(x))
        std::cout << "The digit is prime\n";

    else
        std::cout << "The digit is not prime\n";

    return 0;
}
