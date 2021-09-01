//
// Created by zy on 2021/8/30.
//

#ifndef MY_ALGORITHMS_TIME_COST_CALCULATE_H
#define MY_ALGORITHMS_TIME_COST_CALCULATE_H
#include <ctime>
#include <iostream>
using namespace std;
class my_time{
private:
    time_t begin=clock();
    time_t end;
    double ret;
public:
    void get_time_cost();
};
#endif //MY_ALGORITHMS_TIME_COST_CALCULATE_H
