#pragma once

#include "Norm.h"

class Vector3D : public Norm {
private:
    double x;
    double y;
    double z;
public:
    Vector3D(double x_, double y_, double z_);
    double calculateNorm() const override;
    double calculateMagnitude() const override;
};