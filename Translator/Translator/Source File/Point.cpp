#include "Point.h"

// Constructor implementation
Point::Point(int x, int y, int z) : x(x), y(y), z(z) {}

// Destructor implementation
Point::~Point() {}

// Function to return coordinates as an array
std::array<int, 3> Point::get_coord() const {
    return {x, y, z};
}
