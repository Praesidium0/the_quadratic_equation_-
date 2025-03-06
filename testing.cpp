#include <iostream>
#include <cmath> 
#include <iomanip>
#include <vector>
#include "solve_square_equation.h"
#include "is_zero.h"

bool testing(double a, double b, double c, double correct_x1, double correct_x2)
{
    std::pair<double, double> roots = solve_square_equation(a, b, c);

    if(is_zero(roots.first - correct_x1)&& is_zero(roots.second - correct_x2)){
        return true;
    } 
    else if (is_zero(roots.first - roots.second)&&is_zero(correct_x1 - correct_x2)) {
        return true;
    } 
    else{
        return false;
    }
    
}
