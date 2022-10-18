#include "displayNum.h"
#include <iostream>


int getNumberFromInput (); // Using Function Prototypes a.k.a Forward Definition

int getNumberFromInput () {
    int inp {};
    std::cout << "Enter a number: ";
    std::cin >> inp;

    return inp; 
}


void addTwoNumbers () {
    int x { getNumberFromInput() };
    int y { getNumberFromInput() };

    std::cout << x << " + " << y << " is: " << x + y << '\n';

}


int main () {
    int num { getNumberFromInput() }; // Declare a integer num with the value of the getNumberFromInput function
    displayDoubleNum(num);

    /*
    std::cout << "\nAdding Two Numbers\n";
    addTwoNumbers();
    */

    return 0;
}




/*
Status Codes for main(), for maximum portability

0: Success
EXIT_SUCCESS: executed successfully
EXIT_FAILURE: did not execute successfully

Access EXIT_SUCCESS and EXIT_FAILURE using the <cstdlib> header
#include <cstdlib>
. . . 
return EXIT_SUCCESS;
*/