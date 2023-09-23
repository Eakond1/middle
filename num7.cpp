#include <iostream>
#include "middle.h"
using namespace std;
long long itc_bin_num(long long number){
    long long bin=0, j;
    double a;
    for(j=0; number>0; j++){
        a= itc_pow(10,j);
        bin+=(number%2)*a;
        number/=2;
    }
    return bin;
}
