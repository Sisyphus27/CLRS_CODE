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

int _quicksort::_randomized_partition(vector<int> &A, int p, int r) {
    generate_random r1;
    int i = r1.int_inter_random(p, r);
    swap(A[r], A[i]);
    return _partition(A, p, r);
}

void _quicksort::_randomized_quicksort_initial(vector<int> &A, int p, int r) {
    if (p < r) {
        int q = _randomized_partition(A, p, r);
        _randomized_quicksort_initial(A, p, q - 1);
        _randomized_quicksort_initial(A, q + 1, r);
    }
}

void _quicksort::_randomized_quicksort(vector<int> &A) {
    _randomized_quicksort_initial(A, 0, A.size() - 1);
}

int _quicksort::_hoare_patition(vector<int> &A, int p, int r) {
    int x = A[p];
    int i = p - 1;
    int j = r + 1;
    while (true) {
        do {
            j--;
        } while (A[j] > x);
        do {
            i++;
        } while (A[i] < x);
        if (i < j)
            swap(A[i], A[j]);
        else
            return j;
    }
}

void _quicksort::_hoare_quick_sort_initial(vector<int> &A, int p, int r) {
    if (p < r) {
        int q = _hoare_patition(A, p, r);
        _hoare_quick_sort_initial(A, p, q);
        _hoare_quick_sort_initial(A, q + 1, r);
    }
}

void _quicksort::_hoare_quick_sort(vector<int> &A) {
    _hoare_quick_sort_initial(A, 0, A.size() - 1);
}

vector<int> _quicksort::_partition_eq_2(vector<int> &A, int p, int r) {
    int x = A[p];
    int low = p, high = p;
    for (int j = p + 1; j <= r; ++j) {
        if (A[j] < x) {
            int y = A[j];
            A[j] = A[high + 1];
            A[high + 1] = A[low];
            A[low] = y;
            low++;
            high++;
        } else if (A[j] == x) {
            swap(A[high + 1], A[j]);
            high++;
        }
    }
    return {low, high};
}

void _quicksort::_quick_sort_eq_2_initial(vector<int> &A, int p, int r) {
    if (p < r) {
        int low, high;
        vector<int> buf = _partition_eq_2(A, p, r);
        low = buf[0], high = buf[1];
        _quick_sort_eq_2_initial(A, p, low - 1);
        _quick_sort_eq_2_initial(A, high + 1, r);
    }
}

void _quicksort::_quick_sort_eq_2(vector<int> &A) {
    _quick_sort_eq_2_initial(A, 0, A.size() - 1);
}
