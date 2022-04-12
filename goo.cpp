#include "goo.h"

int getValue(int a, int b)
{
    if ((a > 5) || (b > 5)) {
        return a * b;
    }

    if (b > 3) {
        return a;
    } else {
        return b;
    }

    return 0;   
}

