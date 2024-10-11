#pragma once
#include "Point.h"
#include <iostream>
#include <array>  // Include array for return type
using namespace std;

class Triangle {
private:
    Point p1, p2, p3;

public:
    Triangle(Point p1, Point p2, Point p3);
    ~Triangle();

    array<array<int, 3>, 3> get_coord() const;  // Return an array of points
};
