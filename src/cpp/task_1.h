/*
 * Author: Diyorbek
 * Date:10.20.2023
 * Name:task1
 */
#ifndef TASK_1_H
#define TASK_1_H

bool isLeapYear(int year) {
    if (year % 4 != 0) {
        return false;
    } else if (year % 100 != 0) {
        return true;
    } else if (year % 400 != 0) {
        return false;
    } else {
        return true;
    }
}

#endif // TASK_1_H
