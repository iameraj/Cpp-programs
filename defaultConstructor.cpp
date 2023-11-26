#include <iostream>

class MyClass {
public:
    MyClass() {
        std::cout << "Default constructor called.\n";
    }
};

int main() {
    MyClass obj;

    return 0;
}
