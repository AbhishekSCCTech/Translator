#pragma once
#include "Point.h"
#include "Triangle.h"
#include <vector>

class Triangulation {
public:
    // Function to generate triangles from a vector of Points
    std::vector<Triangle> get_triangles(const std::vector<Point>& points);
};
