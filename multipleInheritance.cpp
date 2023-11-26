#include <iostream>

// Base class M
class M {
protected:
    int m;

public:
    M() {
        m = 0;
    }

    void get_m() {
        std::cout << "Enter value for m: ";
        std::cin >> m;
    }
};

// Base class N
class N {
protected:
    int n;

public:
    N() {
        n = 0;
    }

    void get_n() {
        std::cout << "Enter value for n: ";
        std::cin >> n;
    }
};

class P : public M, public N {
public:
    void display() {
        get_m();
        get_n();
        std::cout << "Values: m = " << m << ", n = " << n << "\n";
    }
};

int main() {
    P obj;

    obj.display();

    return 0;
}
