#include <iostream>
#include "02_Getting_Started/_sort.h"
#include "04_Divide_and_Conquer/divide-and-conquer.h"
#include "05_Probabilistic_Analysis_and_Randomized_Algorithms/hiring_problem.h"
#include "06_Heapsort/_heaps.h"
#include "random_algorithm/my_random.h"
#include "time_cost_calculate/time_cost_calculate.h"
#include <vector>

using namespace std;

int main() {

    //random array
    class generate_random r1, r2;
    vector<int> t = r1.int_random(-27, 27, 10);
    vector<int> test = {16, 4, 10, 14, 7, 9, 3, 2, 8, 1};
    //heap
    _heap h1;
    h1._initialized(test);
    h1._print_heap();
    //time variable_1
    _time_cost time_1;
    h1._max_heapify(1);

    time_1.get_time_cost();

    h1._print_heap();
    return 0;
}
