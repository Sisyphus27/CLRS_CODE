//
// Created by zy on 2021/9/1.
//

#ifndef MY_ALGORITHMS__HEAPS_H
#define MY_ALGORITHMS__HEAPS_H

#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

class _heap {//max-heap
private:
    vector<int> heap;

public:
    void _initialized(vector<int> A);//initialized the heap.

    int _length();//return the heap's length.

    void _print_heap();//print elements of heap.

private:
    static int _parent_index(int i);//return the index of node i's parent.

    int _left_index(int i);//return the index of node i's left child.

    int _right_index(int i);//return the index of node i's right child.
};

#endif //MY_ALGORITHMS__HEAPS_H
