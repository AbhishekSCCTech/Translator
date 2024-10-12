#pragma once
#include <array>

class Point {
private:
    int x, y, z;  // Coordinates stored as integers

public:
    // Constructor and Destructor
    Point(int x = 0, int y = 0, int z = 0);
    ~Point();

    // Function to return coordinates
    std::array<int, 3> get_coord() const;
};
