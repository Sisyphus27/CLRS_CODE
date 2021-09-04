//
// Created by zy on 2021/9/4.
//

#include "_quicksort.h"


int _quicksort::_partition(vector<int> &A, int p, int r) {
    int x = A[r];
    int i = p - 1;
    for (int j = p; j <= r - 1; ++j) {
        if (A[j] <= x) {
            i++;
            swap(A[i], A[j]);
        }
    }
    swap(A[i + 1], A[r]);
    return i + 1;
}

void _quicksort::_quick_sort_initial(vector<int> &A, int p, int r) {
    if (p < r) {
        int q = _partition_eq(A, p, r);
        _quick_sort_initial(A, p, q - 1);
        _quick_sort_initial(A, q + 1, r);
    }
}

int _quicksort::_partition_eq(vector<int> &A, int p, int r) {
    int x = A[r];
    int i = p - 1;
    int cnt = 1;
    for (int j = p; j <= r - 1; ++j) {
        if (A[j] < x) {
            i++;
            swap(A[i], A[j]);
        } else if (A[j] == x) {
            cnt++;
            if (cnt == 2) {
                i++;
                cnt = 0;
            }
        }
    }
    swap(A[i + 1], A[r]);
    return i + 1;
}

void _quicksort::_quick_sort(vector<int> &A) {
    _quick_sort_initial(A, 0, A.size() - 1);
}
