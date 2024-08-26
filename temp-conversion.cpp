#include <iostream>

int main() {
  int tempf = 0;
  int tempc = 0;
  std::cout << "Enter the temperature in Fahrenheit: ";
  std::cin >> tempf;
  tempc = (tempf - 32) / 1.8;
  std::cout << "The temperature in Celsius is: " << tempc << std::endl;
  return 0;
}