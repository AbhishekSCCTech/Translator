#include "Triangle.h"

Triangle::Triangle(Point p1, Point p2, Point p3) : p1(p1), p2(p2), p3(p3) {}

Triangle::~Triangle() {}

std::array<std::array<int, 3>, 3> Triangle::get_coord() const {
    return {p1.get_coord(), p2.get_coord(), p3.get_coord()};
}
