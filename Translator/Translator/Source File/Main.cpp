#include "Reader.h"
#include "Triangulation.h"
#include "Writer.h"
#include <iostream>

int main() {
    Reader reader("cube-ascii.stl");
    std::vector<Point> points = reader.read();

    Triangulation triangulation;
    std::vector<Triangle> triangles = triangulation.get_triangles(points);

    Writer writer("output.dat");
    writer.write(triangles, reader.get_unique_points());

    return 0;
}
