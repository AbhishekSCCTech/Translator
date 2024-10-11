#pragma once
#include <iostream>
#include <array>  
using namespace std;

class Point {
private:
    int x, y, z;

public:
    Point(int x = 0, int y = 0, int z = 0);  
    ~Point();
    
    array<int, 3> get_coord() const;  
};
