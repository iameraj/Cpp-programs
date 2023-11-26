#include <iostream>

// Base class Side
class Side {
protected:
    float L;

public:
    void set_values() {
        std::cout << "Enter the length: ";
        std::cin >> L;
    }
};

class Square : public Side {
public:
    void sq() {
        set_values();
        std::cout << "Area of Square: " << L * L << "\n";
    }
};

class Cube : public Side {
public:
    void cub() {
        set_values();
        std::cout << "Volume of Cube: " << L * L * L << "\n";
    }
};

int main() {
    Square squareObj;
    Cube cubeObj;

    squareObj.sq();
    cubeObj.cub();

    return 0;
}
