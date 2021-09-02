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

