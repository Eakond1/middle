#include <iostream>
#include "middle.h"
using namespace std;
int itc_rev_num(long long number){
    long long a = 0;
    if(number<0){
        number=number*(-1);
    }
    while (number != 0) {
        a = a * 10 + number % 10;
        number /= 10;
    }
    int count = 0;
    while(a!= 0){
        count++;
        a /= 10;
    }
    return count;
}