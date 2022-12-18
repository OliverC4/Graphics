#ifndef RAY_H
#define RAY_H

#include "vector.h"

class Ray {
    public:
        // Variables
        Point origin;
        Vector direction;

        // Empty Ray Constructor
        Ray() {};
        // Overloaded Ray Constructor
        Ray(const Point& orig, const Vector& dir) : origin(orig), direction(dir) {};

        // Methods
        Point origin() const { return origin; }
        Vector direction() const { return direction; }

        Point isAt(double t) const {
            return origin + t * direction;
        }
};

#endif