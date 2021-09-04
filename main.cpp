#include <iostream>
#include "02_Getting_Started/_sort.h"
#include "04_Divide_and_Conquer/divide-and-conquer.h"
#include "05_Probabilistic_Analysis_and_Randomized_Algorithms/hiring_problem.h"
#include "06_Heapsort/_heaps.h"
#include "06_Heapsort/_priority_queue.h"
#include "random_algorithm/my_random.h"
#include "time_cost_calculate/time_cost_calculate.h"
#include <vector>

using namespace std;

int main() {

    //random array
    class generate_random r1, r2;
    vector<int> t = r1.int_random(-27, 27, 10);
    vector<int> test = {4, 1, 3, 2, 16, 9, 10, 14, 8, 7};
    //heap
    _heap h1;
    _max_priority_queue h2;
    h1._initialized(test);
    h1._print_heap();
    h1._build_max_heap();
    h1._print_heap();
    h2._initialized(test);
    h2._print_heap();
    h2._build_max_heap_by_insert();
    h2._print_priority_queue();

    return 0;
}
