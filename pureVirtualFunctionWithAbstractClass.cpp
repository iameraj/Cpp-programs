#include <iostream>

class Shape {
public:
    virtual void displayArea() const = 0;  

    void displayMessage() const {
        std::cout << "This is a shape.\n";
    }
};

class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) : radius(r) {}

    void displayArea() const override {
        std::cout << "Area of Circle: " << 3.14 * radius * radius << "\n";
    }
};

int main() {

    Circle circleObj(5.0);


    circleObj.displayArea();
    circleObj.displayMessage();

    return 0;
}
