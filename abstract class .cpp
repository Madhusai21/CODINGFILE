#include<iostream>
using namespace std;
class Shape {
public:
    virtual float area() = 0;
};

class Rectangle : public Shape {
private:
    float width, height;
public:
    Rectangle(float w, float h) : width(w), height(h) {}
    float area() { return width * height; }
};

class Circle : public Shape {
private:
    float radius;
public:
    Circle(float r) : radius(r) {}
    float area() { return 3.14 * radius * radius; }
};

int main() {
    Rectangle r(5, 10);
    cout << "Rectangle area: " << r.area() << endl;
    Circle c(5);
    cout << "Circle area: " << c.area() << endl;
    return 0;
}
}
