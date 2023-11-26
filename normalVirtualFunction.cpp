#include <iostream>

// Base class with a virtual function
class Shape {
public:
    virtual void displayArea() {
        std::cout << "Area of the shape\n";
    }
};

class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) : radius(r) {}

    void displayArea() override {
        std::cout << "Area of Circle: " << 3.14 * radius * radius << "\n";
    }
};

int main() {
    Shape shapeObj;
    Circle circleObj(5.0);

    shapeObj.displayArea();
    circleObj.displayArea();

    return 0;
}
