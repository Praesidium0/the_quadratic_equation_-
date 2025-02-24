#include <iostream>
#include <cmath> 
#include <iomanip>
#include "getvalue.h"
#include "calculation_of_roots.h"
#include "truncateToTwoDecimals.h"

int solution_is_linear(int input){

    double a = 0, b = 0, c = 0;
    getValue(a,b,c);

    if(a!=0){
        double x = (c -b) / a;
        std::cout << "Корень уравнения: " << std::setprecision(2) << x << std::endl;

    }else if(b!=c){
        std::cout << "Нет решения" << std::endl;

    }else {
        std::cout << "Бесконечное множество решений" << std::endl;
    }

}