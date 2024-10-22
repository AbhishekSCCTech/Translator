#pragma once
#include "Reader.h"
#include <vector>
#include "Point.h"
#include "Triangulation.h"

class STLReader : public Reader {
private:
    std::vector<Point> pointList;

    int getOrAddUniqueCoordinate(double value, Triangulation& triangulation);

    void buildAndInsertTriangle(Point& p1, Point& p2, Point& p3, Triangulation& triangulation);

public:
    STLReader();
    ~STLReader();

    void read(const std::string& inputFile, Triangulation& triangulation) override;
};
