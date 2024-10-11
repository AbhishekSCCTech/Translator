#pragma once
#include <iostream>
using namespace std;

class Point {
public:
    int x, y, z;  

    Point(int x = 0, int y = 0, int z = 0);  
    ~Point();  

    void get_coord() const;  
};



