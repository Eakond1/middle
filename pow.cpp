#include <iostream>
#include "middle.h"
using namespace std;
double itc_pow(int num, int step){
    double a = num;
    if (step==0){
        return 1;
    }
    else if (step>0){
        for (int i=1; i < step; i++){
            a=a*num;
        }
        return a;
    }

    if (step==0){
        return 0;
    }
    else {
        for(int i=-1; i>step; i--){
            a=a*num;
        }
        return 1/a;
    }
}