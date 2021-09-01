//
// Created by zy on 2021/9/1.
//

#include "hiring_problem.h"

int _random(int a, int b) {
    int range = b - a;
    int bits = ceil(log2(range));
    int result = 0;
    int r;
    for (int i = 0; i < bits; ++i) {
        r = _random(0, 1);
        result += (r << i);
    }
    if (result > range)
        return _random(a, b);
    else
        return a + result;
}