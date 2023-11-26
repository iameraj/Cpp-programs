#include <iostream>

class MyClass {
private:
    int value;

public:
    MyClass(int val) {
        value = val;
        std::cout << "Parameterized constructor called with value: " << value << "\n";
    }

    void displayValue() {
        std::cout << "Value: " << value << "\n";
    }
};

int main() {
    MyClass obj(42);

    obj.displayValue();

    return 0;
}
