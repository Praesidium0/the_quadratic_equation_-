#include <iostream>
#include <cmath> 
#include <iomanip>
#include "getvalue.h"
#include "calculation_of_roots.h"
#include "truncateToTwoDecimals.h"

int solution_is_linear(int input){

    double a = 0, b = 0, c = 0;
    getValue(a,b,c);

    if(a!=0){ // TODO: You cannot comapre doubles like that. 1^(-32) is still not exactly zero, but it is considered zero because of mashine floating-points computation error. Write a function to compare doubles with given precision.
              // something like compare_doubles(a, 0, EPSILON), wich will check if `a` lays in EPSILON-neighbourhood of `0`
        double x = (c -b) / a;
        std::cout << "Корень уравнения: " << std::setprecision(2) << x << std::endl; //TODO: I told you, what if someone of your collegues want to use this part of your code as a library? Separate computational part from input / output part

    }else if(b!=c){
        std::cout << "Нет решения" << std::endl;

    }else {
        std::cout << "Бесконечное множество решений" << std::endl;
    }
    
    // TODO: Compiler suggest: Non-void function does not return value! This will lead you to UB (undefined behaviour) which is EXTREMLY DANGEROUS
}
