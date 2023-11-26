#include <iostream>

// Base class student
class Student {
protected:
    int roll_number;

public:
    void get_number() {
        std::cout << "Enter roll number: ";
        std::cin >> roll_number;
    }

    void put_number() {
        std::cout << "Roll number: " << roll_number << "\n";
    }
};

// Derived class test
class Test : public Student {
protected:
    float sub1;
    float sub2;

public:
    void get_marks() {
        get_number();
        std::cout << "Enter marks for Subject 1: ";
        std::cin >> sub1;
        std::cout << "Enter marks for Subject 2: ";
        std::cin >> sub2;
    }

    void put_marks() {
        put_number();
        std::cout << "Marks - Subject 1: " << sub1 << ", Subject 2: " << sub2 << "\n";
    }
};

class Result : public Test {
private:
    float total;

public:
    void display() {
        total = sub1 + sub2;
        put_marks();
        std::cout << "Total Marks: " << total << "\n";
    }
};

int main() {
    Result obj;

    obj.display();

    return 0;
}
