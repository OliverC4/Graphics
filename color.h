#ifndef COLOR_H
#define COLOR_H

#include <iostream>
#include "vector.h"

// Color Utility Functions
void writeColor(std::ostream &out, Color pixelColor) {
    // Write [0, 255] value of each color
    out << static_cast<int>(256 * pixelColor.x()) << ' '
        << static_cast<int>(256 * pixelColor.y()) << ' '
        << static_cast<int>(256 * pixelColor.z()) << '\n';
}

#endif