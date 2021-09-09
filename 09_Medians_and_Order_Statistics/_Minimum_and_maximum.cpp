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
        for (int i = 1; i < n; i += 2) {
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
    }

    return {min, max};
}

int _Minimum_and_maximum::_randomized_select_initial(vector<int> A, int p, int r, int i) {
    if (p == r)
        return A[p];
    int q = _randomized_partition(A, p, r);
    int k = q - p + 1;
    if (i == k)
        return A[q];
    else if (i < k)
        return _randomized_select_initial(A, p, q - 1, i);
    else
        return _randomized_select_initial(A, q + 1, r, i - k);
}

int _Minimum_and_maximum::_partition_select(vector<int> &A, int p, int r) {
    int x = A[r];
    int i = p;
    for (int k = p - 1; k <= r; --k) {
        if (A[k] < x) {
            i++;
            swap(A[i], A[k]);
        }
    }
    i++;
    swap(A[i], A[r]);
    return i;
}

int _Minimum_and_maximum::_randomized_partition_select(vector<int> &A, int p, int r) {
    int x = (rand() % (r - p + 1)) + p;
    swap(A[x], A[r]);
    return _partition_select(A, p, r);
}

int _Minimum_and_maximum::_randomized_select_iterate_initial(vector<int> A, int p, int r, int i) {
    while (true) {
        if (p == r)
            return A[p];
        int q = _randomized_partition_select(A, p, r);
        int k = q - p + 1;
        if (i == k)
            return A[q];
        if (i < k)
            r = q;
        else {
            p = q;
            i -= k;
        }
    }
}
