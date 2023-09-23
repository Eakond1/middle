#include <iostream>
#include "middle.h"
using namespace std;
long long itc_oct_num(long long number){
    int rem, i = 1, a = 0;
    while (number != 0) {
        rem = number % 8;
        number /= 8;
        a += rem * i;
        i *= 10;
    }
        return a;
}