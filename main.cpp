#include <iostream>
#include "sort_algorithms.h"
#include "divide-and-conquer.h"
#include "my_random.h"
#include "my_time_cost.h"
#include <vector>
#include <ctime>

using namespace std;

int main() {
    //random array
    class generate_random r;
    vector<int>t=r.int_random(-1000,1000,92000);
    vector<vector<int>>A=r.int_matrix_random(-100,100,2,5);
    //time variable_1
    my_time time_1;
    divide_and_conquer s;
    vector<int> b = s.find_max_subarray_linear_approach(t);
    for (auto item:b)
        cout << item << " ";
    //time use
    time_1.get_time_cost();
    //time variable_2
    my_time time_2;

    divide_and_conquer s_1;
    vector<int> b_1 = s_1.find_max_subarray(t, 0, t.size() - 1);
    for (auto item:b_1)
        cout << item << " ";

    //time use
    time_2.get_time_cost();

    return 0;
}
