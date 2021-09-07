//
// Created by zy on 2021/9/7.
//

#ifndef MY_ALGORITHMS__COUNTING_SORT_H
#define MY_ALGORITHMS__COUNTING_SORT_H

#include <vector>
#include <algorithm>

using namespace std;

class _Counting_sort {
public:
    void _counting_sort(vector<int> &A);//p195

    int _how_many_in_range(vector<int> A, int a, int b);//8.2-4

protected:
    void _counting_sort_initial(vector<int> &A, vector<int> &B, int k);//p195

};


#endif //MY_ALGORITHMS__COUNTING_SORT_H
