//
// Created by zy on 2021/8/21.
//

#include "divide-and-conquer.h"

vector<int> divide_and_conquer::find_max_crossing_subarray(vector<int> A, int l, int mid, int h) {
    vector<int> res;
    int left_sum = INT_MIN, max_left, right_sum, max_right, sum = 0;
    for (int i = mid; i >= l; --i) {
        sum += A[i];
        if (sum > left_sum) {
            left_sum = sum;
            max_left = i;
        }
    }
    right_sum = INT_MIN, sum = 0;
    for (int i = mid + 1; i <= h; ++i) {
        sum += A[i];
        if (sum > right_sum) {
            right_sum = sum;
            max_right = i;
        }
    }
    res.push_back(max_left);
    res.push_back(max_right);
    res.push_back(left_sum + right_sum);
    return res;
}

vector<int> divide_and_conquer::find_max_subarray(vector<int> A, int l, int h) {
    vector<int> res1, res2, res3;
    if (l == h) {
        res1.push_back(l);
        res1.push_back(h);
        res1.push_back(A[l]);
        return res1;
    } else {
        int mid = (l + h) / 2;
        res1 = find_max_subarray(A, l, mid);
        res2 = find_max_subarray(A, mid + 1, h);
        res3 = find_max_crossing_subarray(A, l, mid, h);
        if (res1[2] >= res2[2] && res1[2] >= res3[2])
            return res1;
        else if (res2[2] >= res1[2] && res2[2] >= res3[2])
            return res2;
        else
            return res3;
    }
}

vector<int> divide_and_conquer::find_max_subarray_brute_force(vector<int> A) {
    vector<int> res;
    int sum = INT_MIN, sum_f, max_left, max_right;
    for (int i = 0; i < A.size(); ++i) {
        sum_f = 0;
        for (int j = i; j < A.size(); ++j) {
            sum_f += A[j];
            if (sum_f > sum) {
                sum = sum_f;
                max_left = i;
                max_right = j;
            }
        }
    }
    res.push_back(max_left);
    res.push_back(max_right);
    res.push_back(sum);
    return res;
}

vector<int> divide_and_conquer::find_max_subarray_base_case_change(vector<int> A, int l, int h) {
    //bug
    vector<int> res1, res2, res3;
    if (l == h) {
        return find_max_subarray_brute_force(A);
    } else {
        int mid = (l + h) / 2;
        res1 = find_max_subarray_base_case_change(A, l, mid);
        res2 = find_max_subarray_base_case_change(A, mid + 1, h);
        res3 = find_max_crossing_subarray(A, l, mid, h);
        if (res1[2] >= res2[2] && res1[2] >= res3[2])
            return res1;
        else if (res2[2] >= res1[2] && res2[2] >= res3[2])
            return res2;
        else
            return res3;
    }
}

vector<int> divide_and_conquer::find_max_subarray_linear_approach(vector<int> A) {
    vector<int> res;
    if (A.empty()) return {};
    int preSum = A[0];
    int maxSum = preSum;
    int max_left = 0, max_right;
    for (int i = 1; i < A.size(); ++i) {
        if (preSum > 0) {
            preSum += A[i];
            maxSum = max(maxSum, preSum);
            max_right = i;
        } else {
            preSum = A[i];
            max_left = i;
        }
    }
    res.push_back(max_left);
    res.push_back(max_right);
    res.push_back(maxSum);
    return res;
}

vector<vector<int>> divide_and_conquer::square_matrix_multiply(vector<vector<int>> A, vector<vector<int>> B) {
    if (A.size() != B[0].size())
        return {};
    vector<vector<int>> C;
    int m = A.size();
    int n=B[0].size();
    for (int i = 0; i < m; ++i) {
        vector<int> res;
        for (int j = 0; j < n; ++j) {
            int c = 0;
            for (int k = 0; k < n; ++k) {
                c += A[i][k] * B[k][j];
            }
            res.push_back(c);
        }
        C.push_back(res);
    }
    return C;
}

