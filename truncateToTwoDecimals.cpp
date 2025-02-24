#include <iostream>
#include <cmath> 
#include <iomanip>

// TODO: you dont actuslly need this function, but a note on naming:
// there are several 'types' of naming:
// 1. snake_case_naming_type
// 2. camelCaseNamingType
// 3. PascalCaseNamingType
//
// please, choose one and do not mix them in your project.
// in all other places you use snake_case, but here you use camelCase

// Функция для обрезки числа до двух знаков после запятой
double truncateToTwoDecimals(double num) { 
    return std::floor(num * 100) / 100;
}
