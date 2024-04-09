#pragma once

#include "Norm.h"

class Complex : public Norm {
private:
    double real;
    double imag;
public:
    Complex(double r, double i);
    double calculateNorm() const override;
    double calculateMagnitude() const override;
};
