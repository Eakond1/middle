#include <iostream>
#include "middle.h"
using namespace std;
int itc_second_simple_max_num(long long number) {
    if (number / 10 == 0) {
        return -1;
    }
    int max = -1;
    int second_max = -1;
    if (number < 0) {
        number = number * (-1);
    }
    while (number != 0) {
        int digit = number % 10;

        if (digit > max) {
            second_max = max;
            max = digit;
        }
        else if (digit < max && digit > second_max) {
            second_max = digit;
        }
        number /= 10;
        if (max == second_max) {
            return -1;
        }
    }

    return second_max;
}