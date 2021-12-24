#include <iostream>
int main(){
  std::cout << "Please enter your variables: ";
  double length;
  double width;
  std::cin >>length;
  std::cin >> width;
  std::cout << length * width;
  return 0;
}