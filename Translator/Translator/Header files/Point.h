#pragma once

class Point {
private:
    int x;
    int y;
    int z;

public:
    Point(int x, int y, int z);
    ~Point();

    int getX() const;
    int getY() const;
    int getZ() const;
};
