#include <iostream>

// Base class
class B {
private:
    int a;

public:
    B() {
        a = 0;
    }

    void get_ab() {
        std::cout << "Enter value for a: ";
        std::cin >> a;
    }

    int get_a() {
        return a;
    }

    void show_a() {
        std::cout << "a = " << a << "\n";
    }
};

// Derived class
class D : public B {
private:
    int c;

public:
    D() {
        c = 0;
    }

    void mul() {
        get_ab();
        c = get_a() * get_a();
    }

    void display() {
        show_a();
        std::cout << "c = " << c << "\n";
    }
};

int main() {
    D obj;

    // Perform operations using derived class
    obj.mul();
    obj.display();

    return 0;
}
