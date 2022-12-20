#ifndef COLOR_H
#define COLOR_H

#include <iostream>
#include "vector.h"

// Color Utility Functions
void writeColor(std::ostream &out, Color pixel_color) {
    // Write [0, 255] value of each color
    out << static_cast<int>(256 * pixel_color.x()) << ' '
        << static_cast<int>(256 * pixel_color.y()) << ' '
        << static_cast<int>(256 * pixel_color.z()) << '\n';
}

#endif