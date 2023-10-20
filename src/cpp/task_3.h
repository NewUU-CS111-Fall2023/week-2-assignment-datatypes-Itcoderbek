#ifndef TASK_3_H
#define TASK_3_H

#include <string>

std::string generateHundredDigitNumber() {
    std::string number;
    for (int i = 0; i < 100; i++) {
        int digit = rand() % 10;
        number += std::to_string(digit);
    }
    return number;
}

std::string divideHundredDigitNumber(const std::string& number, int divisor) {
    std::string result;

    int remainder = 0;
    for (char digit : number) {
        int currentDigit = digit - '0';
        int dividend = remainder * 10 + currentDigit;
        int quotient = dividend / divisor;
        remainder = dividend % divisor;

        result += std::to_string(quotient);
    }

    return result;
}

#endif // TASK_3_H
