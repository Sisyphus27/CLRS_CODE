//
// Created by zy on 2021/9/1.
//

#include "_heaps.h"

#include <utility>


void _heap::_initialized(vector<int> A) {
    heap = std::move(A);//what is this function do?
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

int _heap::_parent_index(int i) {
    if (i == 1)return 1;
    return floor(i / 2);
}

int _heap::_left_index(int i) {
    i << 1;
    if (i > _length())
        return -1;
    return i;
}

int _heap::_right_index(int i) {
    i = (i << 1) + 1;
    if (i > _length())
        return -1;
    return i;
}

