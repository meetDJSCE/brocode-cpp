#include <iostream>

int main() {
    char oper;

    double a, b;

    std::cout << "Enter the first number: ";
    std::cin >> a;

    std::cout << "Enter the mathematical operator: ";
    std::cin >> oper;

    std::cout << "Enter the second number: ";
    std::cin >> b;

    switch (oper)
    {
    case '+':
        std::cout << "Addition of the two numbers is: " << (a + b);
        break;
    case '-':
        std::cout << "Subtraction of the two numbers is: " << (a - b);
        break;
    case 'x':
        std::cout << "Multiplication of the two numbers is: " << (a * b);
        break;
    case '/':
        std::cout << "Division of the two numbers is: " << (a / b);
        break;
    default:
        std::cout << "Enter an appropriate operator";
        break;
    }

    return 0;
}