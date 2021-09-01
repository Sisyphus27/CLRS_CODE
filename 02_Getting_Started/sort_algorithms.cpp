//
// Created by zy on 2021/8/17.
//

#include "sort_algorithms.h"

vector<int> my_sort::insertion(vector<int> &input) {
    int i, key;
    for (int j = 1; j < input.size(); ++j) {
        key = input[j];
        i = j - 1;
        while (i >= 0 && input[i] > key) {
            input[i + 1] = input[i];
            i--;
        }
        input[i + 1] = key;
    }
    return input;
}

vector<int> my_sort::select(vector<int> &input) {
    int tmp, index;
    for (int i = 0; i < input.size() - 1; ++i) {
        index = i;
        for (int j = i + 1; j < input.size(); ++j) {
            if (input[j] < input[index])
                index = j;
        }
        tmp = input[i];
        input[i] = input[index];
        input[index] = tmp;
    }
    return input;
}

//bug. 如果是奇数元素，递归到最后一个元素时，数组会越界。
vector<int> my_sort::merge(vector<int> &input, int p, int q, int r) {
    int n1 = q - p + 1, n2 = r - q;
    int length = input.size() - 1;
    //设置返回条件防止数组越界
    if ((n1 + p - 1 >= length) || (n2 - 1 + q >= length))
        return input;
    vector<int> L(n1 + 1, 0), R(n2 + 1, 0);
    for (int i = 0; i < n1; ++i)
        L[i] = input[p + i];
    for (int i = 0; i < n2; ++i)
        R[i] = input[q + i + 1];
    L[n1] = INT_MAX;
    R[n2] = INT_MAX;
    for (int k = p, i = 0, j = 0; k <= r; ++k) {
        if (L[i] <= R[j])
            input[k] = L[i++];
        else
            input[k] = R[j++];
    }
    return input;
}

//bug
vector<int> my_sort::merge_sort(vector<int> &input, int p, int r) {
    if (p < r) {
        int q = (p + r) / 2;
        merge_sort(input, p, q);
        merge_sort(input, q + 1, r);
        merge(input, p, q, r);
    }
    return input;
}

bool my_sort::f_plus_s_eq_x(vector<int> input, int x) {
    int remain;
    vector<int> tmp = merge_sort(input, 0, input.size() - 1), tt;
    for (int i = 0; i < tmp.size(); ++i) {
        remain = x - tmp[i];
        tt = tmp;
        tt.erase(tt.begin() + i);
        if (binary_search(tt, remain) != -1)
            return true;
    }
    return false;
}

int my_sort::binary_search(vector<int> input, int x) {
    int l = 0, h = input.size() - 1;
    int mid = (l + h) / 2;
    while (l < h) {
        if (input[mid] == x)
            return mid;
        else if (x < input[mid]) {
            h = mid;
            mid = (l + h) / 2;
        } else if (x > input[mid]) {
            l = mid + 1;
            mid = (l + h) / 2;
        }
    }
    return -1;
}

vector<int> my_sort::bubblesort(vector<int> &input) {
    int k = input.size() - 1;
    for (int i = 0; i < k; ++i) {
        for (int j = k; j > i + 1; --j) {
            if (input[j] < input[j - 1])
                swap(input, j, j - 1);
        }
    }
    return input;
}

void my_sort::swap(vector<int> &a, int i, int j) {
    int tmp = a[i];
    a[i] = a[j];
    a[j] = tmp;
}

void my_sort::num_of_inversion(vector<int> &input, int p, int r, int &output) {

    if (p >= r - 1)return;

    int q = (p + r) >> 1;
    num_of_inversion(input, p, q, output);
    num_of_inversion(input, q, r, output);
    num_of_inversion_merge(input, p, q, r, output);
}

int my_sort::num_of_inversion_merge(vector<int> &input, int p, int q, int r, int &output) {
    int n1 = q - p, n2 = r - q;
    vector<int> L, R;
    for (int i = 0; i < n1; ++i)
        L.push_back(input[p + i]);
    for (int i = 0; i < n2; ++i)
        R.push_back(input[q + i]);
    L.push_back(INT_MAX);
    R.push_back(INT_MAX);
    for (int k = p, i = 0, j = 0; k <= r; ++k) {
        if (L[i] <= R[j]) {
            input[k] = L[i++];
        } else {
            input[k] = R[j++];
            output += n1 - i;
        }
    }
    return 0;
}

