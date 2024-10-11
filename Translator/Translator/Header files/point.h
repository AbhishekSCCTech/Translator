#pragma once
#include <iostream>
using namespace std;

class Point {

private:
int x, y, z;  


public:

    Point(int x = 0, int y = 0, int z = 0);  
    ~Point();  

    void get_coord() const;  
};



