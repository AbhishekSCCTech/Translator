#include "Writer.h"
#include <fstream>
#include <iostream>
using namespace std;

Writer::Writer() : file("output.dat") {}

Writer::~Writer() {}

void Writer::write(const vector<Triangle>& triangles, const vector<double>& unique_points) {
    ofstream outfile(file);
    if (!outfile.is_open()) {
        cerr << "Error: Unable to open file: " << file << endl;
        return;
    }

    for (const auto& triangle : triangles) {
        outfile << unique_points[triangle.p1.x] << " " << unique_points[triangle.p1.y] << " " << unique_points[triangle.p1.z] << endl;
        outfile << unique_points[triangle.p2.x] << " " << unique_points[triangle.p2.y] << " " << unique_points[triangle.p2.z] << endl;
        outfile << unique_points[triangle.p3.x] << " " << unique_points[triangle.p3.y] << " " << unique_points[triangle.p3.z] << endl;
        outfile << unique_points[triangle.p1.x] << " " << unique_points[triangle.p1.y] << " " << unique_points[triangle.p1.z] << endl;
        outfile << endl;
    }

    outfile.close();
    cout << "Data written to " << file << endl;
}
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
