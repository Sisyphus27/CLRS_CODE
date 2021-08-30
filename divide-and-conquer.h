//
// Created by zy on 2021/8/21.
//

#ifndef MY_ALGORITHMS_DIVIDE_AND_CONQUER_H
#define MY_ALGORITHMS_DIVIDE_AND_CONQUER_H

#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

class divide_and_conquer {
public:
    vector<int> find_max_subarray(vector<int> A, int l, int h);
    vector<int> find_max_subarray_brute_force(vector<int>A);
    vector<int> find_max_subarray_base_case_change(vector<int> A, int l, int h);//bug
    vector<int>find_max_subarray_linear_approach(vector<int>A);
    vector<vector<int>>square_matrix_multiply(vector<vector<int>>A,vector<vector<int>>B);
private:
    static vector<int> find_max_crossing_subarray(vector<int> A, int l, int mid, int h);
};

#endif //MY_ALGORITHMS_DIVIDE_AND_CONQUER_H
