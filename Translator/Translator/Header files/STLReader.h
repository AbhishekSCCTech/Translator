#pragma once
#include "Point.h"
#include <vector>
#include <string>
#include <unordered_map>

class STLReader : public Translator {
public:
    virtual ~STLReader() = default;
    virtual std::vector<Point> read() = 0;
    virtual std::vector<double> getUniquePoints() = 0;
};
