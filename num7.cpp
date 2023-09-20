#include <iostream>
#include "../middle.h"
using namespace std;
long long itc_bin_num(long long number){
    int binaryNum[32];
    int a = 0;
    while (number > 0)
    {
        binaryNum[a] = number % 2;
        number = number / 2;
        a++;
    }

    for (int i = a - 1; i >= 0; i--)
        cout << binaryNum[i];
}
