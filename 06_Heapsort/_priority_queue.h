//
// Created by zy on 2021/9/4.
//

#ifndef MY_ALGORITHMS__PRIORITY_QUEUE_H
#define MY_ALGORITHMS__PRIORITY_QUEUE_H

#include "_heaps.h"

class _max_priority_queue: public _heap{
public:
    int _heap_maximum();//return maximum of heap.

    int _heap_extract_max();//

    void _max_heap_insertion(int key);//insert a new element.

    void _heap_delete(int i);//delete i-th element of a heap.

protected:
    void _heap_increase_key(int i,int key);
};
#endif //MY_ALGORITHMS__PRIORITY_QUEUE_H
