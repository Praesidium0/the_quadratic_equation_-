#include <iostream>
#include <cmath> 
#include <iomanip>
#include "testing.h"
#include "solution_is_square.h"
#include "solution_is_linear.h"

int main() {
    setlocale(LC_ALL, "Russian");
    int input = 0;
    std::cout << "Выберите действие: \n 1. Решение квадратного уравнения \n 2. Решение линейного уравнения \n 3. Запустить тестирование \n 4. Выход \n Ввод: ";
    std::cin >> input;
    
    // TODO: What if input < 0? Or input > 4?  
    // TODO: Never trust the user! Let him just input coefficients and then decide if equasion is linear or square.
    //       I would suggest you to create main like that:
    //          int main() {
    //              input_coeffitients(a, b, c);
    //              answer = solve_eqausion(a, b, c);
    //              output_solution(answer);
    //          }
    //          
    //      While solve_eqausion looks something like:
    //          answer_type solve_eqausion(a, b, c) {
    //              eq_type = determine_equasion_type(a, b, c);
    //              switch (eq_type)
    //                  case LINEAR:
    //                      return solve_linear(b, c);
    //                  case SQUARE:
    //                      return solve_square(b, c);
    //                  default:
    //                      print_error("error desription");
    //          }
    //
    
    if (input == 1) {
        solution_is_square(input); // TODO: Why do you pass input here? It's unused..

    } else if (input == 2) {
        solution_is_linear(input);

    } else if(input==3) {
        testing(input);

    } else if (input == 4){
        exit; // Exit is a function, and should be called like `exit()`, but its better to call return from main
    }

    return 0;
}
