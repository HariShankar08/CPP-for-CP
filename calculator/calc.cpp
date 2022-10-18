#include <iostream>
#include "getInput.h"
#include "getMathOp.h"
#include "getRes.h"


int main() {
    // Get first number
    int x { getNumFromInput() };
    
    // Get Mathematical Operation
    char op { getMathOperation() }; // 0-ADD, 1-SUB, 3-MUL, 4-DIV

    // Get second number
    int y { getNumFromInput() }; 

    
    
    // Calculate result
    int res { getResult(x, op, y) };

    // Print result
    std::cout << x << op << y << "= " << res << '\n';

    return 0;
}