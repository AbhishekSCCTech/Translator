#pragma once
#include "Triangle.h"
#include <vector>

class Triangulation {
public:
    std::vector<Triangle> generateTriangles(const std::vector<Point>& points);
};
