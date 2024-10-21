#include "Triangle.h"

Triangle::Triangle(Point p1, Point p2, Point p3) : p1(p1), p2(p2), p3(p3) {}

Triangle::~Triangle() {}

void Triangle::display() const {
    p1.display();
    p2.display();
    p3.display();
}
