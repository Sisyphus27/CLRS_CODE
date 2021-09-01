//
// Created by zy on 2021/8/17.
//

#ifndef MY_ALGORITHMS_SORT_ALGORITHMS_H
#define MY_ALGORITHMS_SORT_ALGORITHMS_H

#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

class my_sort {
public:
    static vector<int> insertion(vector<int> &input);

    static vector<int> select(vector<int> &input);

    vector<int> merge_sort(vector<int> &input, int p, int r);

    bool f_plus_s_eq_x(vector<int> input, int x);

    vector<int> bubblesort(vector<int> &input);

    void num_of_inversion(vector<int> &input, int p, int r, int &output);


private:
    static vector<int> merge(vector<int> &input, int p, int q, int r);

    int binary_search(vector<int> input, int x);//input has been sorted

    void swap(vector<int> &a, int i, int j);

    static int num_of_inversion_merge(vector<int> &input, int p, int q, int r, int &output);
};


#endif //MY_ALOGRITHMS_SORT_ALGORITHMS_H
