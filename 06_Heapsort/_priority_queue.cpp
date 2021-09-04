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
//    if (!this->is_max_heap)
//        _build_max_heap();
    this->heap[i] = key;
    while ((i >= 1) && (this->heap[_parent_index(i)] < this->heap[i])) {
        _swap(this->heap, i, _parent_index(i));
        i = _parent_index(i);
    }
}

void _max_priority_queue::_max_heap_insertion(int key, vector<int> &A) {
    this->heap_size++;
    if (this->heap_size > this->length)
        this->length = this->heap_size;
    A.insert(A.begin() + this->heap_size - 1, INT_MIN);
    _heap_increase_key_insert(A, this->heap_size - 1, key);
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

void _max_priority_queue::_build_max_heap_by_insert() {
    this->heap_size = 1;
    this->priority_queue.push_back(this->heap[0]);
    for (int i = 1; i < this->length; ++i) {
        _max_heap_insertion(this->heap[i], this->priority_queue);
    }
}

void _max_priority_queue::_heap_increase_key_insert(vector<int> &A, int i, int key) {
    if (key < A[i]) {
        cout << "new key is smaller than current key" << endl;
        exit(0);
    }
//    if (!this->is_max_heap)
//        _build_max_heap();
    while ((i >= 1) && (A[_parent_index(i)] < key)) {
        A[i] = A[_parent_index(i)];
        i = _parent_index(i);
    }
    A[i] = key;
}

void _max_priority_queue::_print_priority_queue() {
    if (this->priority_queue.empty())
        return;
    for (int i = 0; i < this->heap_size; ++i) {
        cout << this->priority_queue[i] << " ";
    }
    cout << endl;
}
