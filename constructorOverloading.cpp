#include <iostream>

class MyClass {
private:
    int value;

public:
    MyClass() {
        value = 0;
        std::cout << "Default constructor called.\n";
    }

    MyClass(int val) {
        value = val;
        std::cout << "Parameterized constructor called with value: " << value << "\n";
    }

    MyClass(int val1, int val2) {
        value = val1 + val2;
        std::cout << "Constructor with two parameters called. Sum: " << value << "\n";
    }

    void displayValue() {
        std::cout << "Value: " << value << "\n";
    }
};

int main() {
    MyClass obj1;
    MyClass obj2(42);
    MyClass obj3(10, 20);

    obj1.displayValue();
    obj2.displayValue();
    obj3.displayValue();

    return 0;
}
