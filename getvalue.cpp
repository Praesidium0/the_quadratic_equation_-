#include <iostream>
#include <cmath> 
#include <iomanip>

void getValue(double& a, double& b, double& c) {
    while (true) {
        std::cout << "Введите коэффициенты A, B, C: ";
        std::cin >> a >> b >> c;

        if (std::cin.fail()) {
            int MAX_INPUT_SIZE = 32767;
            std::cin.clear();
            std::cin.ignore(MAX_INPUT_SIZE, '\n'); //максимальное количество символов которое будет проигнорировано
                                          
            std::cout << "Ошибка ввода! Попробуйте снова.\n";
        }
        else {
            return;
        }
    }
}
