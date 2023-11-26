#include <iostream>

class MyClass {
private:
    static int count; 

public:
    MyClass() {
        count++;
    }
    static void displayCount() {
        std::cout << "Count: " << count << "\n";
    }
};

int MyClass::count = 0;

int main() {
    MyClass obj1, obj2, obj3;

    MyClass::displayCount();

    return 0;
}
