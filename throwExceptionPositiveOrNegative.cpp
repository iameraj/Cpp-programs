#include <iostream>
#include <stdexcept>

int main() {
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;
zx
    try {
        if (number > 0) {
            std::cout << "The number is positive.\n";
        } else if (number < 0) {
            std::cout << "The number is negative.\n";
        } else {
            throw std::runtime_error("Error: The number is neither positive nor negative.");
        }
    } catch (const std::runtime_error& e) {
        std::cerr << e.what() << "\n";
    }

    return 0;
}
