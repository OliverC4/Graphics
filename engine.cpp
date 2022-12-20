#include <iostream>
#include "color.h"
#include "ray.h"
#include "vector.h"

Color rayColor(const Ray& r) {
    Vector unit_direction = unitVector(r.getDirection());
    auto t = 0.5 * (unit_direction.y() + 1.0);
    return (1.0 - t) * Color(1.0, 1.0, 1.0) + t * Color(0.5, 0.7, 1.0);
}

int main() {
    // Image
    const int image_height = 256;
    const int image_width = 256;

    // Camera
    auto viewport_height = 2.0;
    auto viewport_width = 2.0;
    auto focal_length = 1.0;

    auto origin = Point(0, 0, 0);
    auto vertical = Vector(0, viewport_height, 0);
    auto horizontal = Vector(viewport_width, 0, 0);
    auto lower_left_corner = origin - horizontal/2 - vertical/2 - Vector(0, 0, focal_length);

    // Render
    std::cout << "P3\n" << image_width << " " << image_height << "\n255\n";

    for (int j = image_height - 1; j >= 0; --j) {
        std::cerr << "\rScanlines remaining: " << j << "\n" << std::flush;
        for (int i = 0; i < image_width; ++i) {
            auto u = double(i) / (image_width - 1);
            auto v = double(j) / (image_height - 1);
            Ray r(origin, lower_left_corner + u*horizontal + v*vertical - origin);
            Color pixel_color = rayColor(r);
            writeColor(std::cout, pixel_color);
        }
    }

    std::cerr << "\nDone. \n";
}