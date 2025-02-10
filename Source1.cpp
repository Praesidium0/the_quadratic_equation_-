#include <iostream>
#include <cmath>

// TODO: Makefile
// TODO: separate files
// TODO: remove .vs folder
int main() {
    setlocale(LC_ALL, "Russian");

    double a, b, c; // Initialize

    // TODO make function
    std::cout << "Введите коэффициенты A, B, C: ";
    std::cin >> a >> b >> c;
    /*c == inf*/
    /*c == nan*/
    // TODO check if is all ok with input
    
    // Nice
    if (a == 0) {
        std::cout << "Это не квадратное уравнение!" << std::endl;
        return 0;
    }

    // TODO separate solver logic from output
    // TODO tests
    double D = b * b - 4 * a * c; // Формула дискриминанта

    if (D > 0) { // Два различных корня
        double x1 = (-b + std::sqrt(D)) / (2 * a);
        double x2 = (-b - std::sqrt(D)) / (2 * a);
        std::cout << "Первый корень: " << x1 << std::endl;
        std::cout << "Второй корень: " << x2 << std::endl;
    }
    else if (D == 0) { // Один корень
        double x = -b / (2 * a);
        std::cout << "Единственный корень: " << x << std::endl;
    }
    else { // Нет вещественных корней
        std::cout << "Нет вещественных корней" << std::endl;
    }

    return 0;
}
