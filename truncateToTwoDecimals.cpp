#include <iostream>
#include <cmath> 
#include <iomanip>

// Функция для обрезки числа до двух знаков после запятой
double truncateToTwoDecimals(double num) {
    return std::floor(num * 100) / 100;
}