#include "camera.hpp"

Camera::Camera () {}

Camera::Camera(const Vector origin, Vector direction, double distance, double width, double height, double res_coef) {
    o = origin;
    d = direction.normal();
    dist = distance;
    w = width;
    h = height;
    res_x = width * res_coef;
    res_y = height * res_coef;

    ort1 = Vector(-d.y, d.x, d.z).normal();
    ort2 = ort1.cross(d).normal();
    left_upper = o + direction * dist + ort1 * width * 0.5 + ort2 * height * 0.5;
}

Ray Camera::get_ray(double x, double y) {
    Vector dx = ort1 * x * w / res_x;
    Vector dy = ort2 * y * h / res_y;
    return {o, (left_upper - dx - dy).normal()};
}

void Camera::update() {
    ort1 = Vector(-d.y, d.x, d.z).normal();
    ort2 = ort1.cross(d).normal();
    left_upper = o + d * dist + ort1 * w / 2 + ort2 * h / 2;
}
