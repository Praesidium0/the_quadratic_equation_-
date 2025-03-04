#include <iostream>
#include <cmath> 
#include <iomanip>
#include <vector>
#include "calculation_of_roots.h"
#include "is_zero.h"

bool testing(double a, double b, double c, double correct_x1, double correct_x2)
{
    std::vector<double> roots = calculation_of_roots(a, b, c);

    if(is_zero(roots[0] == correct_x1) && is_zero(roots[1] == correct_x2)){
        return true;
    }else{
        return false;
    }
}
