#include "Vector3D.h"
#include <cmath>
#include <algorithm>

Vector3D::Vector3D(double x_, double y_, double z_) : x(x_), y(y_), z(z_) {}

double Vector3D::calculateNorm() const {
    return std::sqrt(x * x + y * y + z * z); // Модуль
}

double Vector3D::calculateMagnitude() const {
    return std::max({ std::abs(x), std::abs(y), std::abs(z) }); // Норма
}