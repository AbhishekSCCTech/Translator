#pragma once
#include "Point.h"
#include <iostream>
using namespace std;

class Triangle {
private:
    Point p1, p2, p3; 
    
public:
   
     Triangle(Point p1, Point p2, Point p3);  
    ~Triangle();  

    void get_coord() const;  
};





