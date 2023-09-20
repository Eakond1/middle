#include <iostream>
#include "middle.h"
using namespace std;
void itc_num_print(int number){
    cout<< number;
}
int itc_len_num(long long number){
    int a=0;
    if (number==0){
        return 1;
    }
    if (number<0){
        number=-number;
    }
    while (number!=0){
        number=number/10;
        a++;
    }
    return a;
}
int itc_sum_num(long long number){
    int sum=0,a;
    while (number!=0){
        a=number%10;
        number=number/10;
        sum=sum+a;
    }
return sum;
}
long long itc_multi_num(long long number){
    int a,comp=1;
    while (number !=0){
        a=number%10;
        number=number/10;
        comp= comp*a;
    }
    return comp;
}

int itc_max_num(long long number){
    int max,a;
    max=0;
    while(number!=0){
        a=number%10;
        if(a>=max){
            max=a;
        }
        else
            max=max;
        number=number/10;
    }
    return max;
}
