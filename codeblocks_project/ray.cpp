#include "ray.hpp"

Ray::Ray(const Vector &origin, const Vector &direction) {
    o = origin;
    d = direction;
}

Vector Ray::cast(double l) {
    return o + d.normal() * l;
}
