#include <iostream>
#include "02_Getting_Started/_sort.h"
#include "04_Divide_and_Conquer/divide-and-conquer.h"
#include "05_Probabilistic_Analysis_and_Randomized_Algorithms/hiring_problem.h"
#include "06_Heapsort/_heaps.h"
#include "06_Heapsort/_priority_queue.h"
#include "07_Quicksort/_quicksort.h"
#include "08_Sorting_in_Linear_Time/_counting_sort.h"
#include "09_Medians_and_Order_Statistics/_Minimum_and_maximum.h"
#include "random_algorithm/my_random.h"
#include "time_cost_calculate/time_cost_calculate.h"
#include <vector>

using namespace std;

void _print_vec(vector<int> A) {
    for (auto item:A)
        cout << item << " ";
    cout << endl;
}

int main() {

    //random array
    class generate_random r1, r2;
    vector<int> t = r1.int_array_random(0, 27000, 1000000);
    int k = *max_element(t.begin(), t.end());
    vector<int> t_copy = t;
    vector<int> A = {2, 5, 3, 0, 2, 3, 0, 3};
    vector<int> B(1000000, 0);
    //counting sort
    //minimum
    _Minimum_and_maximum m1,m2;
    _time_cost t_1;
    cout<<m1._minimum(t);
    t_1.get_time_cost();
    _time_cost t_2;
    for(auto item:m2._min_and_max_simultaneous(t_copy))
        cout<<item<<" ";
    cout<<endl;
    t_2.get_time_cost();
    return 0;
}
