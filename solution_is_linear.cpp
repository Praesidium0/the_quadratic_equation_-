#include <iostream>
#include <limits>
#include "is_zero.h"

double solution_is_linear(double a, double b, double c)
{
    if(!is_zero(a)){ 
        return (c-b)/a;
    }
    return std::numeric_limits<double>::quiet_NaN();
}
