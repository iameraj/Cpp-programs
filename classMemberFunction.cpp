#include <iostream>

class MyClass {
public:
    void displayMessage() {
        std::cout << "Hello, this is a member function.\n";
    }

    void callAnotherFunction() {
        displayMessage();
    }
};

int main() {
    MyClass obj;

    obj.callAnotherFunction();

    return 0;
}
