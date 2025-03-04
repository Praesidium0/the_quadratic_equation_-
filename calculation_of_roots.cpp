#include <iostream>
#include <cmath> 
#include <utility>
#include <vector>
#include "is_zero.h"

std::vector<double> calculation_of_roots(double a, double b, double c) {
    double D = 0, x1 = 0, x2 = 0;

    std::vector<double> vec(2,NAN);
    D=b*b-4*a*c;

    if(D > 0){
        vec[0] = (-b + std::sqrt(D))/(2*a);
        vec[1] = (-b - std::sqrt(D))/(2*a);
    }else if(is_zero(D)){
        vec[0] = -b/(2*a);
    }
    return vec;
}