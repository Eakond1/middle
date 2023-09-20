#include <iostream>
#include "../middle.h"
using namespace std;
int itc_rev_bin_num(long long number){
    int num = number;
    int value = 0;
    int base = 1;
    int temp = num;
    while (temp) {
        int digit = temp % 10;
        temp = temp / 10;
        value =value+ digit * base;
        base = base * 2;
    }
    return value;
}
