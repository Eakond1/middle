#include <iostream>
#include "middle.h"
using namespace std;

int itc_rev_num(long long number){
    long long reversed = 0;
    while (number != 0) {
        reversed = reversed * 10 + number % 10;
        number /= 10;
    }
    int count = 0;
    while(reversed != 0){
        count++;
        reversed /= 10;
    }
    return count;
}
