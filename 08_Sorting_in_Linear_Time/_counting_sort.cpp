//
// Created by zy on 2021/9/7.
//

#include "_counting_sort.h"


void _Counting_sort::_counting_sort(vector<int> &A, vector<int> &B, int k) {
    vector<int> C(k+1, 0);
    for (int j : A) {
        C[j] = C[j] + 1;
    }
    for (int i = 1; i <= k; ++i) {
        C[i] = C[i] + C[i - 1];
    }
    for (int i = A.size() - 1; i >= 0; --i) {
        B[C[A[i]]-1] = A[i];
        C[A[i]] = C[A[i]] - 1;
    }
}
