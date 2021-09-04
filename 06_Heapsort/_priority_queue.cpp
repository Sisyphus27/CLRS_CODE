//
// Created by zy on 2021/9/4.
//

#include "_priority_queue.h"

int _max_priority_queue::_heap_maximum() {
    if (this->is_max_heap)
        return this->heap[0];
    else
        _build_max_heap();
    return this->heap[0];
}

int _max_priority_queue::_heap_extract_max() {
    if (this->heap_size < 1) {
        cout << "heap underflow." << endl;
        exit(0);
    }
    if (!this->is_max_heap)
        _build_max_heap();
    int max = this->heap[0];
    this->heap[0] = this->heap[heap_size - 1];
    this->heap_size--;
    _max_heapify(0);
    return max;
}

void _max_priority_queue::_heap_increase_key(int i, int key) {
    if (key < this->heap[i]) {
        cout << "new key is smaller than current key" << endl;
        exit(0);
    }
    if (!this->is_max_heap)
        _build_max_heap();
    this->heap[i] = key;
    while ((i >= 1) && (this->heap[_parent_index(i)] < this->heap[i])) {
        _swap(i, _parent_index(i));
        i = _parent_index(i);
    }
}

void _max_priority_queue::_max_heap_insertion(int key) {
    this->heap_size++;
    if (this->heap_size > this->length)
        this->length = this->heap_size;
    this->heap.insert(heap.begin() + heap_size - 1, INT_MIN);
    _heap_increase_key(this->heap_size - 1, key);
}

void _max_priority_queue::_heap_delete(int i) {
    if (i < 0 || i >= this->heap_size) {
        cout << "error index" << endl;
        exit(0);
    }
    if (this->heap[i] > this->heap[this->heap_size - 1]) {
        this->heap[i] = this->heap[this->heap_size - 1];
        _max_heapify(i);
    } else {
        _heap_increase_key(i, this->heap[this->heap_size - 1]);
    }
    this->heap_size--;
}
