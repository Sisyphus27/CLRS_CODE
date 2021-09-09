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

vector<int> _Minimum_and_maximum::_min_and_max_simultaneous(vector<int> A) {
    int max, min;
    int n = A.size();
    if ((n % 2) == 0) {
        if (A[0] < A[1]) {
            min = A[0];
            max = A[1];
        } else {
            min = A[1];
            max = A[0];
        }
        for (int i = 2; i < n; i += 2) {
            if (A[i] < A[i + 1]) {
                if (min > A[i])
                    min = A[i];
                if (max < A[i + 1])
                    max = A[i + 1];
            } else {
                if (min > A[i + 1])
                    min = A[i + 1];
                if (max < A[i])
                    max = A[i];
            }
        }
    } else {
        min = A[0];
        max = A[0];
        for (int i = 1; i < n; i+=2) {
            if(A[i]<A[i+1]){
                if(min>A[i])
                    min=A[i];
                if(max<A[i+1])
                    max=A[i+1];
            } else{
                if(min>A[i+1])
                    min=A[i+1];
                if(max<A[i])
                    max=A[i];
            }
        }
    }

    return {min,max};
}
