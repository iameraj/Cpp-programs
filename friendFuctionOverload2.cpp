#include <iostream>

class MyNumber {
private:
    int value;

public:
    MyNumber(int val) : value(val) {}

    MyNumber operator+(const MyNumber &num) {
        return MyNumber(value + num.value);
    }

    void displayValue() {
        std::cout << "Value: " << value << "\n";
    }
};

int main() {
    MyNumber num1(5), num2(10);

    MyNumber result = num1 + num2;

    num1.displayValue();
    num2.displayValue();
    result.displayValue();

    return 0;
}
