#include <iostream>
#include "middle.h"
using namespace std;
int itc_rev_covert_num(long long number, int ss) {
    long long dec_value = 0;
    int base = 1;
    int temp = number;
    while (temp)
    {
        int last_digit = temp % 10;
        temp = temp / 10;
        dec_value += last_digit * base;

        base = base * ss;
    }

    return dec_value;

}
