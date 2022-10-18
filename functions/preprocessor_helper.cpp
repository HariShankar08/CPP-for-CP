#include <iostream>

void doSomething () {
    #ifdef COND
        std::cout << "There is a Condition\n";
        std::cout << COND << '\n';
    #endif
    #ifndef COND
        std::cout << "There isn't a Condtion\n";
    #endif

}

// COND definition in preprocessors.cpp isn't accessible in this file, COND is NOT defined in this scope