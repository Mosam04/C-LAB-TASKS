#include <iostream>
#include "shapes.h"

namespace shapes {

    // SQUARE
    Square::Square() {
        SideLength = 0;
    }

    Square::Square(double Length) {
        SideLength = Length;
    }

    Square::~Square() {}

    void Square::setSideLength(double Length) {
        SideLength = Length;
    }

    double Square::getAreaSquare() const {
        return SideLength * SideLength;
    }

    // TRIANGLE
    Triangle::Triangle() {
        Base = 0;
        Height = 0;
    }

    Triangle::Triangle(double B, double H) {
        Base = B;
        Height = H;
    }

    Triangle::~Triangle() {}

    void Triangle::setBase(double B) {
        Base = B;
    }

    void Triangle::setHeight(double H) {
        Height = H;
    }

    double Triangle::getAreaTriangle() const {
        return 0.5 * Base * Height;
    }

    // CIRCLE
    Circle::Circle() {
        Radius = 0;
    }

    Circle::Circle(double r) {
        Radius = r;
    }

    Circle::~Circle() {}

    void Circle::setRadius(double r) {
        Radius = r;
    }

    double Circle::getAreaCircle() const {
        return Radius * Radius * 3.14;
    }

} // end namespace
