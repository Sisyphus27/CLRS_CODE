#include <iostream>
#include "02_Getting_Started/_sort.h"
#include "04_Divide_and_Conquer/divide-and-conquer.h"
#include "05_Probabilistic_Analysis_and_Randomized_Algorithms/hiring_problem.h"
#include "06_Heapsort/_heaps.h"
#include "06_Heapsort/_priority_queue.h"
#include "07_Quicksort/_quicksort.h"
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
    vector<int> t = r1.int_array_random(-27, 27, 1000000);
    vector<int> t_copy = t;
    vector<int> test = {4, 4, 4, 4, 4, 4, 4, 4};
    //quick sort
    _quicksort q1, q2;
    _time_cost t1;
    q1._quick_sort(t);
    t1.get_time_cost();
    _time_cost t2;
    q2._hoare_quick_sort(t_copy);
    t2.get_time_cost();
    return 0;
}
