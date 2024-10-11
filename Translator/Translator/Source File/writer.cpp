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
        auto coords = triangle.get_coord();
        outfile << unique_points[coords[0][0]] << " " << unique_points[coords[0][1]] << " " << unique_points[coords[0][2]] << endl;
        outfile << unique_points[coords[1][0]] << " " << unique_points[coords[1][1]] << " " << unique_points[coords[1][2]] << endl;
        outfile << unique_points[coords[2][0]] << " " << unique_points[coords[2][1]] << " " << unique_points[coords[2][2]] << endl;
        outfile << unique_points[coords[0][0]] << " " << unique_points[coords[0][1]] << " " << unique_points[coords[0][2]] << endl;
        outfile << endl;
    }

    outfile.close();
    cout << "Data written to " << file << endl;
}





