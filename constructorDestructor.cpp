#include <iostream>

class MyClass {
private:
    static int count; 
    int id;

public:
    MyClass() {
        id = ++count;  
        std::cout << "Constructor called for object with ID: " << id << "\n";
    }

    ~MyClass() {
        std::cout << "Destructor called for object with ID: " << id << "\n";
    }

    static void displayObjectCount() {
        std::cout << "Total objects created: " << count << "\n";
    }
};

int MyClass::count = 0;

int main() {
    MyClass obj1, obj2, obj3;

    MyClass::displayObjectCount();

    return 0;
}
