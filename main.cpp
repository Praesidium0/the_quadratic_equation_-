#include <iostream>
#include <cmath> 
#include <iomanip>
#include <vector>
#include "testing.h"
#include "solution_is_linear.h"
#include "getvalue.h"
#include "is_zero.h"
#include "calculation_of_roots.h"

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
        std::vector<double> roots = calculation_of_roots(a, b, c);

        if (roots.empty()) {
            std::cout << "Нет действительных корней." << std::endl;
        } else if (is_zero(roots[0] - roots[1])) {
            std::cout << "Единственный корень: " << roots[0] << std::endl;
        } else{
            std::cout << "Корни квадратного уравнения: ";

            for(double roots: roots) {
                std::cout << roots << " ";
            }
            std::cout << std::endl;
        }
    }else {
        std::cout << "Ошибка: уравнение некорректное" << std::endl;
    }

    return 0;
}
