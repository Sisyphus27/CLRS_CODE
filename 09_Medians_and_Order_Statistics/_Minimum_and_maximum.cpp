//
// Created by zy on 2021/9/9.
//

#include "_Minimum_and_maximum.h"

int _Minimum_and_maximum::_minimum(vector<int> A) {
    int min = A[0];
    for (int i = 1; i < A.size(); ++i)
        if (min > A[i])
            min = A[i];
    return min;
}
