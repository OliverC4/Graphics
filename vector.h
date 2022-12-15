#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
#include <cmath>

using std::sqrt;

class Vector {
    public:
        // Variables
        double c[3];

        // Empty Vector Constructor
        Vector() : c{0, 0, 0} {};
        // Overloaded Vector Constructor
        Vector(double c0, double c1, double c2) : c{c0, c1, c2} {};

        // Methods
        double x() const { return c[0]; }
        double y() const { return c[1]; }
        double z() const { return c[2]; }

        double length() const {
            return sqrt(lengthSquared());
        }

        double lengthSquared() const {
            return c[0]*c[0] + c[1]*c[1] + c[2]*c[2];
        }
};

#endif