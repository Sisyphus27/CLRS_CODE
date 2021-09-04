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
    vector<int> t = r1.int_random(-27, 27, 10);
    vector<int> test = {4,4,4,4,4,4,4,4};
    //quick sort
    _quicksort q1;
    _print_vec(t);
    q1._quick_sort(t);
    _print_vec(t);
    return 0;
}
