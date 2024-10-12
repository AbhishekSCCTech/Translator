#pragma once
#include "Point.h"
#include <vector>
#include <string>
#include <unordered_map>

class Reader {
private:
    std::string file;

public:
    Reader(const std::string& file = "cube-ascii.stl");
    
    // Function to read points from file and return a vector of Points
    std::vector<Point> read();

    // Function to return the unique points (indexed)
    std::vector<double> get_unique_points() const;
};
