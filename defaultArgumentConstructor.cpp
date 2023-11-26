#include <iostream>

class MyClass {
private:
    int value;

public:
    MyClass(int val = 0) {
        value = val;
        std::cout << "Constructor with default argument called with value: " << value << "\n";
    }

    void displayValue() {
        std::cout << "Value: " << value << "\n";
    }
};

int main() {
    MyClass obj1;
    MyClass obj2(42);

    obj1.displayValue();
    obj2.displayValue();

    return 0;
}
