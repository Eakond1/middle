#include <iostream>
#include "middle.h"
using namespace std;
long long itc_bin_num(long long number){
    int binary = 0, remainder, product = 1;
    while (number != 0) {
        remainder = number  % 2;
        binary = binary + (remainder * product);
        number  = number / 2;
        product *= 10;
    }
    return binary;
}
