#include <iostream>
#include <string>
#include <cmath>

void getValue(double& a, double& b, double& c) {
    while (true) {
        std::cout << "Введите коэффициенты A, B, C: ";
        std::cin >> a >> b >> c;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
        }
        else {
            return;
        }
    }
}