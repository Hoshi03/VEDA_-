#include <iostream>

using namespace std;

class Circle {
    int radius;
public:
    void setRadius(int radius);
    double getArea();
    friend istream& operator>>(istream& stream, Circle& a);
};

void Circle::setRadius(int r) {
    radius = r;
}

double Circle::getArea() {
    return radius * radius * 3.14;
}

