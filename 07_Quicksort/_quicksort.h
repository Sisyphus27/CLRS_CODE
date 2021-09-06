//
// Created by zy on 2021/9/4.
//

#ifndef MY_ALGORITHMS__QUICKSORT_H
#define MY_ALGORITHMS__QUICKSORT_H

#include <vector>
#include "../random_algorithm/my_random.h"

using namespace std;

class _quicksort {
public:
    void _quick_sort(vector<int> &A);//this function doesn't need to input p and r parameter.
    void _randomized_quicksort(vector<int> &A);

protected:
    int _randomized_partition(vector<int> &A, int p, int r);//p179

    void _randomized_quicksort_initial(vector<int> &A, int p, int r);//p179

    void _quick_sort_initial(vector<int> &A, int p, int r);//p171

    int _partition(vector<int> &A, int p, int r);//p171

    int _partition_eq(vector<int> &A, int p, int r);//p174,7.1-2

    int _hoare_patition(vector<int>&A,int p,int r);//p185 the original partitioning algorithm.
};


#endif //MY_ALGORITHMS__QUICKSORT_H
