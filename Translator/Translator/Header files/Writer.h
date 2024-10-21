#pragma once
#include "Triangle.h"
#include <vector>
#include <string>

class Writer {
public:
    Writer();
    ~Writer();

    void write(const std::vector<Triangle>& triangles, const std::vector<double>& uniquePoints);
};
