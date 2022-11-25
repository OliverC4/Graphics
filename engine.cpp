#include <iostream>
#include <vector>

struct scalar2D
{
    // Array of coordinates in 2D space
    float x, y;
};

struct triangle
{
    // Group three scalar2D arrays into triangle
    scalar2D p[3];
};

struct shape
{
    // Group triangles into shape
    std::vector<triangle> coords;
};

int main() {
    shape shapeSquare;

    shapeSquare.coords = {
    
    // SOUTH
    
    // EAST

    // NORTH

    // WEST

    };
}
