#include <iostream>

class MyClass {
private:
    int value;

public:
    MyClass(int val) {
        value = val;
        std::cout << "Parameterized constructor called with value: " << value << "\n";
    }

    MyClass(const MyClass &other) {
        value = other.value;
        std::cout << "Copy constructor called with value: " << value << "\n";
    }

    void displayValue() {
        std::cout << "Value: " << value << "\n";
    }
};

int main() {
    MyClass obj1(42);

    // Use copy constructor to create another object
    MyClass obj2 = obj1;

    obj1.displayValue();
    obj2.displayValue();

    return 0;
}
