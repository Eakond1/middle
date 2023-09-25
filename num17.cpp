#include <iostream>
#include "middle.h"
using namespace std;
int itc_covert_num(long long number, int ss){
    int rem, i = 1;
    long long a=0;
    while (number != 0) {
        rem = number % ss;
        number /= ss;
        a += rem * i;
        i *= 10;
    }
    return a;
}