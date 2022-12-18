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

        Vector operator+=(const Vector &v) {
            c[0] += v.c[0];
            c[1] += v.c[1];
            c[2] += v.c[2];
            return *this;
        }

        Vector operator*=(const double n) {
            c[0] *= n;
            c[1] *= n;
            c[2] *= n;
            return *this;
        } 

        double length() const {
            return sqrt(lengthSquared());
        }

        double lengthSquared() const {
            return c[0]*c[0] + c[1]*c[1] + c[2]*c[2];
        }
};

// Vector Utility Functions
inline std::ostream& operator<<(std::ostream &out, const Vector &v) {
    return out << v.c[0] << ' ' << v.c[1] << ' ' << v.c[2];
}

inline Vector operator+(const Vector &v1, const Vector &v2) {
    return Vector(v1.c[0] + v2.c[0], v1.c[1] + v2.c[1], v1.c[2] + v2.c[2]);
}

inline Vector operator-(const Vector &v1, const Vector &v2) {
    return Vector(v1.c[0] - v2.c[0], v1.c[1] - v2.c[1], v1.c[2] - v2.c[2]);
}

inline Vector operator*(const Vector &v1, const Vector &v2) {
    return Vector(v1.c[0] * v2.c[0], v1.c[1] * v2.c[1], v1.c[2] * v2.c[2]);
}

inline Vector operator*(double n, const Vector &v) {
    return Vector(n * v.c[0], n * v.c[1], n * v.c[2]);
}

inline Vector operator*(const Vector &v, double n) {
    return n * v;
}

inline Vector operator/(Vector v, double n) {
    return (1/n) * v;
}

inline Vector unitVector(const Vector v) {
    return v / v.length();
}

inline double dotProduct(const Vector &v1, const Vector &v2) {
    return v1.c[0] * v2.c[0] + v1.c[1] * v2.c[1] + v1.c[2] * v2.c[2];
}

inline Vector crossProduct(const Vector &v1, const Vector &v2) {
    return Vector(v1.c[1] * v2.c[2] - v1.c[2] * v2.c[1],
                  v1.c[2] * v2.c[0] - v1.c[0] * v2.c[2],
                  v1.c[0] * v2.c[1] - v1.c[1] * v2.c[0]);
}

// Type Aliases
using color = Vector;  // RGB color

#endif