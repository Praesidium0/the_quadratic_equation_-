#include <iostream>
#include <cmath> 
#include "is_zero.h"

std::pair <double, double> solve_square_equation(double a, double b, double c) {
    double D = 0, x1 = 0, x2 = 0;

    std::pair<double, double> roots;
    D=b*b-4*a*c;
    double Dsqrt = sqrt(D);

    if(D > 0){
        roots.first = (-b + Dsqrt)/(2*a);
        roots.second = (-b - Dsqrt)/(2*a);
    }else if(is_zero(D)){
        roots.first = -b/(2*a);
    }
    return roots;
}