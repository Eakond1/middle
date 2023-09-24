#include <iostream>
#include "middle.h"
using namespace std;
int itc_min_num(long long number) {
    int min,a;
    min=9;
    if(number<0){
        number=number*(-1);
    }
    if (number ==0){
        return 0;
    }
    while(number > 0){
        a = number%10;
        if(a<min)
            min=a;
        number=number/10;
    }
    return min;
}
int itc_null_count(long long number) {
    if (number < 0) {
        number = number * (-1);
    }
    int i = 0;
    while (number > 0) {
        int digit = number % 10;
        if (digit == 0) {
            i += 1;
        }
        number /= 10;
    }
    return i;
}
bool itc_mirror_num(long long number){
    long long originalNumber = number;
    long long reversedNumber = 0;

    while (number != 0) {
        long long digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    }

    return originalNumber == reversedNumber;
}


