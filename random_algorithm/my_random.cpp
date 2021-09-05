//
// Created by zy on 2021/8/28.
//

#include "my_random.h"

vector<int> generate_random::int_array_random(int min, int max, int num) {
    random_device rd;
    static std::mt19937 eng(rd());
    static std::uniform_int_distribution<int> dis(min, max);
    vector<int> t;
    for (int i = 0; i < num; ++i) {
        t.push_back(dis(eng));
    }
    return t;
}

vector<vector<int>> generate_random::int_matrix_random(int min, int max, int m, int n) {
    //crate two matrix using one class cause two same matrix(parameter don't change)
    //fixed, but the first matrix will remain same when run many times
    vector<vector<int>> C;
    random_device rd;
    static std::mt19937 eng(rd());
    static std::uniform_int_distribution<int> dis(min, max);
    for (int i = 0; i < m; ++i) {
        vector<int> t;
        for (int j = 0; j < n; ++j) {
            t.push_back(dis(eng));
        }
        C.push_back(t);
    }
    return C;
}

int generate_random::int_inter_random(int min, int max) {
    int t;
    random_device rd;
    static std::mt19937 eng(rd());
    static std::uniform_int_distribution<int> dis(min, max);
    return dis(eng);
}
