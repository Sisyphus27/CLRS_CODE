//
// Created by zy on 2021/9/12.
//

#include "_Stack_and_Queues.h"

void _stack::_push(int x) {
    stack.push_back(x);
    top++;
}

bool _stack::_stack_empty() {
    if (this->top == -1)
        return true;
    return false;
}

int _stack::_pop() {
    if (_stack_empty())
        exit(0);
    this->top--;
    return this->stack[top + 1];
}

void _queues::_enqueue(int x) {
    queues.push_back(x);
    if (this->tail == this->length)
        this->tail = 1;
    else
        this->tail++;
}

int _queues::_dequeue() {
    int x = this->queues[this->head];
    if (this->head == this->length)
        this->head = 1;
    else
        this->head++;
    return x;
}

bool _queues::_queue_empty() {
    if (this->head == this->tail)
        return true;
    else
        return false;
}
