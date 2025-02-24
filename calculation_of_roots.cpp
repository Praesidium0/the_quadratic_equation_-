#include <iostream>
#include <cmath> 
#include <iomanip>

void calculation_of_roots(double& D, double& x1, double& x2, double& x, double a, double b, double c) {
    D = b * b - 4 * a * c;

    if (D > 0) { // Два различных корня
        x1 = (-b + std::sqrt(D)) / (2 * a);
        x2 = (-b - std::sqrt(D)) / (2 * a);
    } else if (D == 0) { // Один корень
        x = -b / (2 * a);
    }
}