#include <iostream>
#include <cmath> 
#include <iomanip>
#include <vector>
#include "testing.h"
#include "solution_is_linear.h"
#include "getvalue.h"
#include "is_zero.h"
#include "solve_square_equation.h"
//#define TESTING


enum EqType {LINER, SQUARE, ERROR};

EqType determine_equation_type(double a, double b, double c){
    if(is_zero(a)&&!is_zero(b)){
        return LINER;
    }else if(!is_zero(a)){
        return SQUARE;
    }else{
        return ERROR;   
    }
}

int main() 
{
    setlocale(LC_ALL, "Russian");

    #ifdef TESTING

    std::vector<std::tuple<double, double, double, double, double>> test_cases = {
        {1, -3, 2, 2, 1}, 
        {1, -2, 1, 1, 0}, 
        {1, 1, 1, -1, -1}, 
        {1, 0, -4, 2, -2}
    };

    bool all_tests_passed = true;

    for(auto [a, b, c, correct_x1, correct_x2] : test_cases){
        if(!testing(a, b, c, correct_x1, correct_x2)){
            all_tests_passed = false;
            std::cout << "Тест с параметрами: " << a << ", " << b << ", " << c << " не пройден" << std::endl;
            break;
        }
    }
    if(all_tests_passed){
        std::cout << "Все тесты пройдены" << std::endl;
    }

    #else

    double a=0,b=0,c=0;
    getValue(a,b,c);

    EqType eqtype = determine_equation_type(a, b, c);

    if(eqtype==LINER){
        double answer = solution_is_linear(a,b,c);
        if(std::isnan(answer)){
            std::cout << "Ошибка: уравнение не имеет решения." << std::endl;
        }else{
            std::cout << "Решение линейного уравнения" << answer << std::endl;
        }
    }
    else if (eqtype == SQUARE){

        std::pair<double, double> roots = solve_square_equation(a, b, c);

        if (is_zero(roots.first)&&is_zero(roots.second)) {
            std::cout << "Нет действительных корней." << std::endl;
        } else if (is_zero(roots.first - roots.second)) {
            std::cout << "Единственный корень: " << roots.first << std::endl;
        } else{
            std::cout << "Корни квадратного уравнения: " << roots.first << " " << roots.second << std::endl;
        }
    }else {
        std::cout << "Ошибка: уравнение некорректное" << std::endl;
    }

    return 0;
    #endif
}
