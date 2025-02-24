#include <iostream>
#include <cmath> 
#include <iomanip>
#include "testing.h"
#include "solution_is_square.h"
#include "solution_is_linear.h"

int main() {
    setlocale(LC_ALL, "Russian");
    int input = 0;
    std::cout << "Выберите действие: \n 1. Решение квадратного уравнения \n 2. Решение линейного уравнения \n 3. Запустить тестирование \n 4. Выход \n Ввод: ";
    std::cin >> input;

    if (input == 1) {
        solution_is_square(input);

    } else if (input == 2) {
        solution_is_linear(input);

    } else if(input==3) {
        testing(input);

    } else if (input == 4){
        exit;
    }

    return 0;
}
