#include <iostream>
#include <cmath> 
#include <iomanip>
#include "getvalue.h"
#include "calculation_of_roots.h"
#include "truncateToTwoDecimals.h"

int solution_is_square(int input){
    double a = 0, b = 0, c = 0;
        getValue(a,b,c);

        if (a == 0) {
            std::cout << "Это не квадратное уравнение!" << std::endl;
            return 0;
        }

        double D = 0, x1 = 0, x2 = 0, x = 0;
        calculation_of_roots(D, x1, x2, x, a, b, c);

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
}
