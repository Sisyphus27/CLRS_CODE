#include <iostream>
#include "sort_algorithms.h"
#include "divide-and-conquer.h"
#include "random_algorithm/my_random.h"
#include "my_time_cost.h"
#include <vector>

using namespace std;

int main() {
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
