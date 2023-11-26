#include <iostream>

class MyClass {
private:
    int value;

public:
    void setValue(int val) {
        this->value = val;
    }

    void displayValue() {
        std::cout << "Value: " << value << "\n";
    }
};

int main() {
    MyClass obj;

    obj.setValue(42);
    obj.displayValue();

    return 0;
}
