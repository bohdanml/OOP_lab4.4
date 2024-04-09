#pragma once

class Norm {
public:
    virtual double calculateNorm() const = 0;
    virtual double calculateMagnitude() const = 0;
    virtual ~Norm() {} // Віртуальний деструктор
};