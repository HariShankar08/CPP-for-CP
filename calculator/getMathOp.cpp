#include "getMathOp.h"
#include <iostream>
#include <string>

char getMathOperation () {
    std::string operations_string = "+-*/";
    char operation_inp {};
    // Rules: 0-Add, 1-Sub, 2-Mul, 3-Div

    // loop until switch leads to returned value
    while (true) {
        std::cout << "Enter the operation (+,-,*,/): ";
        std::cin >> operation_inp;
        
        if (operations_string.find(operation_inp) != std::string::npos) {
            return operation_inp;
        }

        std::cout << "Invalid Operation\n\n";
    }
    return 'E'; // cos EEEEEEE
}