#include <iostream>
#include <cmath> 
#include <iomanip>
#include "getvalue.h"
#include "calculation_of_roots.h"
#include "truncateToTwoDecimals.h"

int testing(int input)
{
    double a = 0, b = 0, c = 0;
        getValue(a,b,c);

        if (a == 0) {
            std::cout << "Это не квадратное уравнение!" << std::endl;
            return 0;
        }

        double D, x1, x2, x;
        calculation_of_roots(D, x1, x2, x, a, b, c);

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