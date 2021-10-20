#include "rev.h"

long long changer(long long num)
{
    long long NumInTw = 0;
    int arg = 1;
    if (num < 0){
        NumInTw = 10000000;
        arg = 0;
        num *= -1;
    }
    int type = 2;
    int i = 0;
    do{
            if (num % type == arg)
                NumInTw += 1 * itc_pow(i, 10);
            num /= type;
            i++;
        }while (num > 1);
    return NumInTw;
}
