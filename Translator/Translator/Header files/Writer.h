#pragma once
#include "Triangle.h"
#include <vector>
#include <string>

class Writer {
private:
    std::string file;

public:
    Writer(const std::string& file = "output.dat");
    ~Writer();

    // Function to write the triangles and unique points to a file
    void write(const std::vector<Triangle>& triangles, const std::vector<double>& unique_points);
};
