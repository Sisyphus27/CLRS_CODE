//
// Created by zy on 2021/9/9.
//

#ifndef MY_ALGORITHMS__MINIMUM_AND_MAXIMUM_H
#define MY_ALGORITHMS__MINIMUM_AND_MAXIMUM_H

#include <vector>
#include "../07_Quicksort/_quicksort.h"

using namespace std;

class _Minimum_and_maximum :public _quicksort{
public:
    int _minimum(vector<int> A);//p214

    vector<int> _min_and_max_simultaneous(vector<int> A);//p215

    int _randomized_select_initial(vector<int>A,int p,int r,int i);//p216

    int _randomized_select_iterate_initial(vector<int>A,int p,int r,int i);//p219,9.2-3
private:
    int _partition_select(vector<int>&A,int p,int r);//p219,9.2-3

    int _randomized_partition_select(vector<int>&A,int p ,int r);//p219,9.2-3
};


#endif //MY_ALGORITHMS__MINIMUM_AND_MAXIMUM_H
