#include <iostream>

int main() {
    char operation;
    double num1, num2;

    std::cout << "Enter an expression (e.g., 5 + 3): ";
    std::cin >> num1 >> operation >> num2;

    switch (operation) {
        case 'add':
        case '+':
            std::cout << num1 << " + " << num2 << " = " << (num1 + num2) << "\n";
            break;
        case '-':
            std::cout << num1 << " - " << num2 << " = " << (num1 - num2) << "\n";
            break;
        case '*':
            std::cout << num1 << " * " << num2 << " = " << (num1 * num2) << "\n";
            break;
        case '/':
            if (num2 != 0) {
                std::cout << num1 << " / " << num2 << " = " << (num1 / num2) << "\n";
            } else {
                std::cout << "Error: Division by zero is undefined.\n";
            }
            break;
        default:
            std::cout << "Error: Invalid operator. Use +, -, *, or /.\n";
            break;
    }

    return 0;
}