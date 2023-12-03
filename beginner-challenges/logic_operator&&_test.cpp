#include <iostream>

int main()
{
  std::cout << "Enter a number: " << '\n';
  int value{};
  std::cin >> value;

  if(value > 10 && value < 20){
    std::cout << "Your value is between 10 and 20." << '\n';
  }
  else{
    std::cout << "Your value is not between 10 and 20.";
  }

  return 0;
}
