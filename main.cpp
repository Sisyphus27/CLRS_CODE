#include <iostream>
#include "02_Getting_Started/sort_algorithms.h"
#include "04_Divide_and_Conquer/divide-and-conquer.h"
#include "05_Probabilistic_Analysis_and_Randomized_Algorithms/hiring_problem.h"
#include "random_algorithm/my_random.h"
#include "time_cost_calculate/time_cost_calculate.h"
#include <vector>

using namespace std;

int main() {

    //random array
    class generate_random r1, r2;
    vector<int> t = r1.int_random(-1000, 1000, 92000);
    //time variable_1
    my_time time_1;
    map<int, int> ret = hire_assistant(t);
    time_1.get_time_cost();

    for (auto item:ret) {
        cout << item.first << " " << item.second << endl;
    }
    return 0;
}
