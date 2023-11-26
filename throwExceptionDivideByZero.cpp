#include <iostream>
#include <stdexcept>

int main() {
    int numerator, denominator;

    std::cout << "Enter numerator: ";
    std::cin >> numerator;

    std::cout << "Enter denominator: ";
    std::cin >> denominator;

    try {
        if (denominator == 0) {
            throw std::runtime_error("Error: Division by zero is not allowed.");
        }

        double result = static_cast<double>(numerator) / denominator;

        std::cout << "Result of division: " << result << "\n";
    } catch (const std::runtime_error& e) {
        std::cerr << e.what() << "\n";
    }

    return 0;
}
