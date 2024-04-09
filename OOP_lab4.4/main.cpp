#include <iostream>
#include "Complex.h"
#include "Vector3D.h"

int main() {
    // Приклади використання
    Complex c(3, 4); // Комплексне число з дійсною частиною 3 та уявною 4
    Vector3D v(1, 2, 3); // Вектор у тривимірному просторі

    Norm* ptrArray[] = { &c, &v }; // Масив вказівників на абстрактний клас Norm

    for (Norm* ptr : ptrArray) {
        std::cout << "Norm: " << ptr->calculateNorm() << std::endl;
        std::cout << "Magnitude: " << ptr->calculateMagnitude() << std::endl;
        std::cout << "---------------------" << std::endl;
    }

    return 0;
}
