#pragma once
#include "Point.h"
#include <array>

class Triangle {
private:
    Point p1, p2, p3;

public:
    Triangle(Point p1, Point p2, Point p3);
    ~Triangle();

    // Returns coordinates of the triangle's vertices
    std::array<std::array<int, 3>, 3> get_coord() const;
};
