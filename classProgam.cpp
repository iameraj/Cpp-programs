#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;
    std::string address;

public:
    void setData(std::string n, int a, std::string addr) {
        name = n;
        age = a;
        address = addr;
    }

    void displayData() {
        std::cout << "Person Information:\n";
        std::cout << "Name: " << name << "\n";
        std::cout << "Age: " << age << "\n";
        std::cout << "Address: " << address << "\n";
    }
};

int main() {
    Person person1;

    // Set data for the person
    person1.setData("John Doe", 25, "123 Main St");

    // Display information
    person1.displayData();

    return 0;
}
