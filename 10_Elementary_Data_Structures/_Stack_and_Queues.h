//
// Created by zy on 2021/9/12.
//

#ifndef MY_ALGORITHMS__STACK_AND_QUEUES_H
#define MY_ALGORITHMS__STACK_AND_QUEUES_H

#include <vector>
#include <stack>
#include <cstdlib>
#include <climits>

using namespace std;


class _stack {
private:
    vector<int> stack;
    int top = -1;
public:
    void _push(int x);

    bool _stack_empty();

    int _pop();
};


class _queues {
private:
    vector<int> queues;
    int head = 0;
    int tail = 0;
    int length=INT_MAX;
public:
    void _enqueue(int x);
    int _dequeue();
    bool _queue_empty();
};

#endif //MY_ALGORITHMS__STACK_AND_QUEUES_H
