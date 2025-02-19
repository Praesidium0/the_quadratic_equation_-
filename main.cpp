#include <iostream>
#include <string>
#include <cmath>
#include "getvalue.h"

void decision(double& D, double& x1, double& x2, double& x, double& a, double& b, double& c) {
    D = b * b - 4 * a * c;

    if (D > 0) { // Два различных корня
        x1 = (-b + std::sqrt(D)) / (2 * a);
        x2 = (-b - std::sqrt(D)) / (2 * a);
    }
    else if (D == 0) { // Один корень
        x = -b / (2 * a);
    }
}

int main() {
    setlocale(LC_ALL, "Russian");

    double a = 0, b = 0, c = 0;
    getValue(a, b, c);

    if (a == 0) {
        std::cout << "This is not a quadratic equation!" << std::endl;//не квадратное уровнение
        return 0;
    }

    double D = 0, x1 = 0, x2 = 0, x = 0;
    decision(D, x1, x2, x, a, b, c);

    if (D > 0) {
        std::cout << "The first root:" << x1 << std::endl; //первый корень
        std::cout << "The second root: " << x2 << std::endl; //второй корень
    }
    else if (D == 0) {
        std::cout << "The only root: " << x << std::endl;//единственный корень
    }
    else {
        std::cout << "There are no real roots" << std::endl;//нет корней
    }

    return 0;
}