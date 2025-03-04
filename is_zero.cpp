#include <iostream>
#include <cmath> 

double is_zero(double x){
    const double EPSILON = 1e-9;
    return std::abs(x) < EPSILON;
}