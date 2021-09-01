#include <iostream>
#include "02_Getting_Started/sort_algorithms.h"
#include "04_Divide_and_Conquer/divide-and-conquer.h"
#include "05_Probabilistic_Analysis_and_Randomized_Algorithms/hiring_problem.h"
#include "random_algorithm/my_random.h"
#include "time_cost_calculate/time_cost_calculate.h"
#include <vector>

using namespace std;

int main() {

    int tt= _random(1,4);
    //random array
    class generate_random r1,r2;
    vector<int>t=r1.int_random(-1000,1000,92000);
    vector<vector<int>>A=r1.int_matrix_random(-100,100,3,3);
    vector<vector<int>>B=r2.int_matrix_random(-100,100,3,3);
    //time variable_1
    my_time time_1;
    divide_and_conquer s;
    vector<vector<int>>C=s.square_matrix_multiply(A,B);
    for(auto item:C){
        for(auto i:item)
            cout<<i<<" ";
        cout<<endl;
    }

    time_1.get_time_cost();
    return 0;
}
