//
// Created by zy on 2021/9/1.
//

#include "_heaps.h"

#include <utility>


void _heap::_initialized(vector<int> A) {
    this->heap = A;
}

int _heap::_length() {
    if (heap.empty())
        return 0;
    return heap.size();
}

void _heap::_print_heap() {
    if (heap.empty())
        return;
    for (auto item:heap)
        cout << item << " ";
    cout << endl;
}

//different point from the book is that the heap of book's description is start by 1.
int _heap::_parent_index(int i) {
    return floor((i - 1) / 2);
}

int _heap::_left_index(int i) {
    i = (i << 1) + 1;
    return i;
}

int _heap::_right_index(int i) {
    i = (i << 1) + 2;
    return i;
}
//

void _heap::_max_heapify(int i) {
    int largest;
    int l = _left_index(i);
    int r = _right_index(i);
    int n = this->_length();
    if ((l <= n) && (heap[l] > heap[i]))
        largest = l;
    else
        largest = i;
    if ((r <= n) && (heap[r] > heap[largest]))
        largest = r;
    if (largest != i) {
        swap(i, largest);
        _max_heapify(largest);
    }
}

void _heap::swap(int i, int j) {
    int t = this->heap[i];
    this->heap[i] = this->heap[j];
    this->heap[j] = t;
}

void _heap::_min_heapify(int i) {
    int lowest;
    int l = _left_index(i);
    int r = _right_index(i);
    int n = this->_length();
    if ((l <= n) && (heap[l] > heap[i]))
        lowest = l;
    else
        lowest = i;
    if ((r <= n) && (heap[r] > heap[lowest]))
        lowest = r;
    if (lowest != i) {
        swap(i, lowest);
        _min_heapify(lowest);
    }
}

void _heap::_max_heapify_nonrecursive(int i) {
    int l, r, largest;
    int n = this->_length();
    while (true) {
        l = _left_index(i);
        r = _right_index(i);
        if (heap[l] > heap[i])
            largest = l;
        else
            largest = i;
        if(heap[r]>heap[largest])
            largest=r;
        if(largest==i)
            return;
        swap(i,largest);
        i=largest;
    }
}

