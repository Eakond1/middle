#include <iostream>
#include "middle.h"
using namespace std;
int itc_rev_oct_num(long long number){
int a = 0, i = 0, rem;
    while (number != 0) {
        rem = number % 10;
        number /= 10;
        a=itc_pow(8,i);
        a += rem * a;
        i++;
    }
    return a;
}
