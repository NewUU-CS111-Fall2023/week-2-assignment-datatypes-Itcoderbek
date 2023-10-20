/*
 * Author:Diyorbek
 * Date:10.202023
 */

#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()

#include "task_1.h"
#include "task_2.h"
#include "task_3.h"

void printTask1() {
    std::cout << "Task 1" << std::endl;
}

void printTask2() {
    std::cout << "Task 2: Guess the Number" << std::endl;
}

void printTask3() {
    std::cout << "Task 3: Divide 100-Digit Number" << std::endl;
}

int main() {
    printTask1();

    int year;
    std::cout << "Enter a year: ";
    std::cin >> year;

    if (isLeapYear(year)) {
        std::cout << year << " is a leap year." << std::endl;
    } else {
        std::cout << year << " is not a leap year." << std::endl;
    }

    printTask2();

    srand(static_cast<unsigned int>(time(0)));
    int secretNumber = generateSecretNumber();

    int guess;
    int attempts = 0;

    do {
        std::cout << "Enter your guess (between 1 and 100): ";
        std::cin >> guess;
        attempts++;

        if (guess < secretNumber) {
            std::cout << "Too low! Try again." << std::endl;
        } else if (guess > secretNumber) {
            std::cout << "Too high! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You guessed the correct number in " << attempts << " attempts." << std::endl;
        }
    } while (guess != secretNumber);

    printTask3();

    int A;
    std::cout << "Enter a number A: ";
    std::cin >> A;

    std::string hundredDigitNumber = generateHundredDigitNumber();
    std::string result = divideHundredDigitNumber(hundredDigitNumber, A);

    std::cout << "Result: " << result << std::endl;

    return 0;
}
