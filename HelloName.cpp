#include <iostream>

int main() {
  std::cout << "Please enter your name: ";
  std::string User;
  std::cin >> User;
  std::cout << "Hello " << User << "!";
  return 0;
}