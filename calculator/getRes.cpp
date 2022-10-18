#include "getRes.h"

int getResult(int num1, char operation, int num2) {
    switch (operation) {
        case '+':
            return num1+num2;
        case '-':
            return num1-num2;
        case '*':
            return num1*num2;
        case '/':
            return num1/num2;
        default:
            return 177013; // How did you even get here :eyes:
    }

    return 177013; // or here
}