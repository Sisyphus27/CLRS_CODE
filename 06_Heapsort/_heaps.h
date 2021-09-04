//
// Created by zy on 2021/9/1.
//

#ifndef MY_ALGORITHMS__HEAPS_H
#define MY_ALGORITHMS__HEAPS_H

#include <vector>
#include <iostream>
#include <cmath>
#include <climits>

using namespace std;

class _heap {//max-heap
protected:
    vector<int> heap;
    int length = 0;
    int heap_size = 0;
    bool is_max_heap = false;

public:
    void _initialized(vector<int> A);//initialized the heap.

    void _print_heap();//print elements of heap.

    void _heapsort();//heapsort algorithm function.-p160

protected:
    void _build_max_heap();//build max heap through first n/2 elements-p157

    static int _parent_index(int i);//return the index of node i's parent.

    int _left_index(int i);//return the index of node i's left child.

    int _right_index(int i);//return the index of node i's right child.

    void _swap(int i, int j);//swap two elements in heap.

    void _max_heapify(int i);//maintaining max-heap property- p154

    void _min_heapify(int i);//maintaining min-heap property-never used-6.2-2

    void _max_heapify_nonrecursive(int i);//non-recursive-version-6.2-5
};

#endif //MY_ALGORITHMS__HEAPS_H
