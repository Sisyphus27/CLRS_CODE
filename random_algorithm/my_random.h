//
// Created by zy on 2021/8/28.
//

#ifndef MY_ALGORITHMS_MY_RANDOM_H
#define MY_ALGORITHMS_MY_RANDOM_H

#include <random>
#include <vector>

using namespace std;

class generate_random {
public:
    int int_inter_random(int min, int max);

    vector<int> int_array_random(int min, int max, int num);

    vector<vector<int>> int_matrix_random(int min, int max, int m, int n);
};

#endif //MY_ALGORITHMS_MY_RANDOM_H
