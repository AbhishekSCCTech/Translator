#include "Reader.h"
#include <fstream>
#include <sstream>
#include <iostream>

static std::vector<double> unique_points;  // Store unique points globally

Reader::Reader(const std::string& file) : file(file) {}

std::vector<Point> Reader::read() {
    std::vector<Point> point_stack;
    std::unordered_map<double, int> unique_map;
    std::ifstream infile(file);
    std::string line;
    int index = 0;

    if (infile.is_open()) {
        while (getline(infile, line)) {
            std::istringstream iss(line);
            std::string word;
            double x, y, z;

            if (iss >> word >> x >> y >> z && word == "vertex") {
                if (unique_map.find(x) == unique_map.end()) {
                    unique_map[x] = index++;
                    unique_points.push_back(x);
                }
                if (unique_map.find(y) == unique_map.end()) {
                    unique_map[y] = index++;
                    unique_points.push_back(y);
                }
                if (unique_map.find(z) == unique_map.end()) {
                    unique_map[z] = index++;
                    unique_points.push_back(z);
                }
                point_stack.push_back(Point(unique_map[x], unique_map[y], unique_map[z]));
            }
        }
    }

    infile.close();
    return point_stack;
}

std::vector<double> Reader::get_unique_points() const {
    return unique_points;
}
