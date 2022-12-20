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
        Point getOrigin() const { return origin; }
        Vector getDirection() const { return direction; }

        Point isAt(double t) const {
            return origin + t * direction;
        }
};

#endif