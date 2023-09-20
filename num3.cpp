#include <iostream>
#include "middle.h"
using namespace std;
bool is_palindrome(long long number) {
    long long reversed_number = 0;
    long long temp_number = number;
    while (temp_number > 0) {
        reversed_number = reversed_number * 10 + (temp_number % 10);
        temp_number /= 10;
    }
    return number == reversed_number;
}
int itc_mirror_count(long long number) {
    int count = 0;
    for (long long i = 1; i <= number; i++) {
        if (is_palindrome(i)) {
            count++;
        }
    }
    return count;
}
