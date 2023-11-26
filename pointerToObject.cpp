#include <iostream>

class MyClass {
public:
    void displayMessage() {
        std::cout << "Hello, this is a member function.\n";
    }
};

int main() {
    MyClass obj;

    MyClass *ptr = &obj;

    ptr->displayMessage();

    return 0;
}
