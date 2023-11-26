#include <iostream>

inline int square(int num) {
    return num * num;
}

int main() {
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;
    std::cout << "Square of " << number << " is: " << square(number) << "\n";

    return 0;
}

