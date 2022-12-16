#ifndef COLOR_H
#define COLOR_H

#include <iostream>
#include "vector.h"

// Color Utility Functions
void writeColor(std::ostream &out, color pixelColor) {
    // Write [0, 255] value of each color
    out << (256 * pixelColor.x()) << ' '
        << (256 * pixelColor.y()) << ' '
        << (256 * pixelColor.z()) << '\n';
}

#endif