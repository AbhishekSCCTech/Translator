#include "Writer.h"
#include <fstream>
#include <iostream>

Writer::Writer() {}

Writer::~Writer() {}

void Writer::write(const std::vector<Triangle>& triangles, const std::vector<double>& uniquePoints) {
    std::ofstream outFile("output.dat");
    if (!outFile.is_open()) {
        std::cerr << "Error: Unable to open file." << std::endl;
        return;
    }

    for (const auto& triangle : triangles) {
        outFile << uniquePoints[triangle.p1.x] << " " << uniquePoints[triangle.p1.y] << " " << uniquePoints[triangle.p1.z] << std::endl;
        outFile << uniquePoints[triangle.p2.x] << " " << uniquePoints[triangle.p2.y] << " " << uniquePoints[triangle.p2.z] << std::endl;
        outFile << uniquePoints[triangle.p3.x] << " " << uniquePoints[triangle.p3.y] << " " << uniquePoints[triangle.p3.z] << std::endl;
        outFile << uniquePoints[triangle.p1.x] << " " << uniquePoints[triangle.p1.y] << " " << uniquePoints[triangle.p1.z] << std::endl;
        outFile << std::endl;
    }

    outFile.close();
    std::cout << "Data written to output.dat" << std::endl;
}
