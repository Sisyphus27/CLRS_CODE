//
// Created by zy on 2021/9/4.
//

#ifndef MY_ALGORITHMS__PRIORITY_QUEUE_H
#define MY_ALGORITHMS__PRIORITY_QUEUE_H

#include "_heaps.h"

class _max_priority_queue: public _heap{
public:
    int _heap_maximum();//return maximum of heap.p163

    int _heap_extract_max();//p163

    void _max_heap_insertion(int key);//insert a new element.p164

    void _heap_delete(int i);//delete i-th element of a heap.6.5-8

protected:
    void _heap_increase_key(int i,int key);
};
#endif //MY_ALGORITHMS__PRIORITY_QUEUE_H
