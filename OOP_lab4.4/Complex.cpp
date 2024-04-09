#include "Complex.h"
#include <cmath>

Complex::Complex(double r, double i) : real(r), imag(i) {}

double Complex::calculateNorm() const {
    return real * real + imag * imag; // Модуль в квадраті
}

double Complex::calculateMagnitude() const {
    return std::sqrt(real * real + imag * imag); // Модуль
}