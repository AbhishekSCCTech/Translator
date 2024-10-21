#include "Triangulation.h"

std::vector<Triangle> Triangulation::generateTriangles(const std::vector<Point>& points) {
    std::vector<Triangle> triangles;
    if (points.size() % 3 == 0) {
        for (size_t i = 0; i < points.size(); i += 3) {
            triangles.emplace_back(points[i], points[i + 1], points[i + 2]);
        }
    }
    return triangles;
}
