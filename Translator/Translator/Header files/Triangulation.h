#pragma once
#include <map>
#include <vector>
#include "Triangle.h"
using namespace std;

class Triangulation {
public:
    vector<double> uniqueCoordinates;
    map<double, int> vertexToIndex;  // Map coordinates to their index          
    vector<Triangle> trianglesList;            

    Triangulation();
    void insertTriangles(const Triangle& triangle);
    ~Triangulation();
};
