#include "Writer.h"
#include <fstream>
#include <iostream>

Writer::Writer(const std::string& file) : file(file) {}

Writer::~Writer() {}

void Writer::write(const std::vector<Triangle>& triangles, const std::vector<double>& unique_points) {
    std::ofstream outfile(file);
    if (!outfile.is_open()) {
        std::cerr << "Error: Unable to open file: " << file << std::endl;
        return;
    }

    for (const auto& triangle : triangles) {
        auto coords = triangle.get_coord();
        for (const auto& point : coords) {
            outfile << unique_points[point[0]] << " " << unique_points[point[1]] << " " << unique_points[point[2]] << std::endl;
        }
        outfile << std::endl;  // Empty line between triangles
    }

    outfile.close();
    std::cout << "Data written to " << file << std::endl;
}
