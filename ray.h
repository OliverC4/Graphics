#ifndef RAY_H
#define RAY_H

#include "vector.h"

class Ray {
    public:
        // Variables
        Point orig;
        Vector dir;

        // Empty Ray Constructor
        Ray() {};
        // Overloaded Ray Constructor
        Ray(const Point& origin, const Vector& direction) : orig(origin), dir(direction) {};

        // Methods
        Point origin() const { return orig; }
        Vector direction() const { return dir; }

        Point isAt(double t) const {
            return orig + t * dir;
        }
};

#endif