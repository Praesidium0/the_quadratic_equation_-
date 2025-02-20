#include <iostream>
#include <cmath>  // Для std::fabs()
#include <iomanip> // Для вывода чисел с точностью

// Функция для обрезки числа до двух знаков после запятой
double truncateToTwoDecimals(double num) {
    return std::floor(num * 100) / 100;
}

void decision(double& D, double& x1, double& x2, double& x, double a, double b, double c) {
    D = b * b - 4 * a * c;

    if (D > 0) { // Два различных корня
        x1 = (-b + std::sqrt(D)) / (2 * a);
        x2 = (-b - std::sqrt(D)) / (2 * a);
    } else if (D == 0) { // Один корень
        x = -b / (2 * a);
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    int input = 0;
    std::cout << "Выберите действие: \n 1. Решение квадратного уравнения \n 2. Запустить тестирование \n Ввод: ";
    std::cin >> input;

    if (input == 1) {
        double a, b, c;
        std::cout << "Введите коэффициенты a, b, c: ";
        std::cin >> a >> b >> c;

        if (a == 0) {
            std::cout << "Это не квадратное уравнение!" << std::endl;
            return 0;
        }

        double D, x1, x2, x;
        decision(D, x1, x2, x, a, b, c);

        // Обрезаем корни перед выводом
        x1 = truncateToTwoDecimals(x1);
        x2 = truncateToTwoDecimals(x2);
        x = truncateToTwoDecimals(x);

        std::cout << std::fixed << std::setprecision(2); // Выводим 2 знака после запятой

        if (D > 0) {
            std::cout << "Первый корень: " << x1 << std::endl;
            std::cout << "Второй корень: " << x2 << std::endl;
        } else if (D == 0) {
            std::cout << "Единственный корень: " << x << std::endl;
        } else {
            std::cout << "Нет корней" << std::endl;
        }
    } else if (input == 2) {
        double a, b, c;
        std::cout << "Введите коэффициенты a, b, c: ";
        std::cin >> a >> b >> c;

        if (a == 0) {
            std::cout << "Это не квадратное уравнение!" << std::endl;
            return 0;
        }

        double D, x1, x2, x;
        decision(D, x1, x2, x, a, b, c);

        // Обрезаем корни перед сравнением
        x1 = truncateToTwoDecimals(x1);
        x2 = truncateToTwoDecimals(x2);
        x = truncateToTwoDecimals(x);

        double user_x1, user_x2, user_x;
        std::cout << "Введите первый и второй корень (ПОСЛЕ ТОЧКИ 2 ЗНАКА!): ";
        std::cin >> user_x1 >> user_x2;

        std::cout << std::fixed << std::setprecision(2); // Выводим 2 знака после запятой

        if (D > 0) {
            std::cout << "У этого квадратного уравнения два корня!" << std::endl;

            if (user_x1 == x1) {
                std::cout << "✅ Первый корень верный! (Программа: " << x1 << ", Введено: " << user_x1 << ")\n";
            } else {
                std::cout << "❌ Первый корень неверный! (Программа: " << x1 << ", Введено: " << user_x1 << ")\n";
            }

            if (user_x2 == x2) {
                std::cout << "✅ Второй корень верный! (Программа: " << x2 << ", Введено: " << user_x2 << ")\n";
            } else {
                std::cout << "❌ Второй корень неверный! (Программа: " << x2 << ", Введено: " << user_x2 << ")\n";
            }
        } else if (D == 0) {
            std::cout << "У этого квадратного уравнения один корень! Введите корень: ";
            std::cin >> user_x;

            if (user_x == x) {
                std::cout << "✅ Корень совпал! (Программа: " << x << ", Введено: " << user_x << ")\n";
            } else {
                std::cout << "❌ Корень неверный! (Программа: " << x << ", Введено: " << user_x << ")\n";
            }
        } else {
            std::cout << "Нет корней" << std::endl;
        }
    }

    return 0;
}
