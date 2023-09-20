#include <iostream>
#include "middle.h"
using namespace std;
int itc_min_num(long long number) {
    int min,a;
    min=9;
    while(number != 0){
        a = number%10;
        if(a<=min)
            min=a;
        else
            min=min;
        number=number/10;
    }
    return min;
}
int itc_null_count(long long number){
    int nul=0,i;
    while (number!=0){
        i= number%10;
        if(i==0){
            nul++;
        }
        number=number/10;
    }
    return nul;
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


