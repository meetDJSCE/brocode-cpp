#include <iostream>
#include <cmath>

int main() {
    double a, b, c;

    std::cout << "Enter the value of 'a'" << "\n";
    std::cin >> a;

    std::cout << "Enter the value of 'b'" << "\n";
    std::cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << c;

    return 0;
}