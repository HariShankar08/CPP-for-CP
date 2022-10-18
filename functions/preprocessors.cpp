#include <iostream>  // Anything with a #... is a "preprocessor", something that allows for conditional execution
#define COND 'A'  // String definitions create warnings, do not display properly when cout
// Characters work okay though

void doSomething();

int main() {
    doSomething();
    return 0;
}

// Preprocessors are strictly limited to the file in which they are defined