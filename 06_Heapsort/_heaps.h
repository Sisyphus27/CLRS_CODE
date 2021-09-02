//
// Created by zy on 2021/9/1.
//

#ifndef MY_ALGORITHMS__HEAPS_H
#define MY_ALGORITHMS__HEAPS_H

#include <vector>
#include <iostream>

using namespace std;

class _heap {
private:
    vector<int> heap;

public:
    void _initialized(vector<int> A);//initialized the heap.

    int _length();//return the heap's length.

    void _print_heap();//print elements of heap.
};

#endif //MY_ALGORITHMS__HEAPS_H
