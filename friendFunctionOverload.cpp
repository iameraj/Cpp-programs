#include <iostream>

class MyNumber {
private:
    int value;

public:
    MyNumber(int val) : value(val) {}

    friend MyNumber operator-(const MyNumber &num);

    void displayValue() {
        std::cout << "Value: " << value << "\n";
    }
};

MyNumber operator-(const MyNumber &num) {
    return MyNumber(-num.value);
}

int main() {
    MyNumber num1(5);

    MyNumber result = -num1;

    num1.displayValue();
    result.displayValue();

    return 0;
}
