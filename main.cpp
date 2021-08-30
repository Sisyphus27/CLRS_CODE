#include <iostream>
#include "sort_algorithms.h"
#include "divide-and-conquer.h"
#include "my_random.h"
#include "my_time_cost.h"
#include <vector>

using namespace std;

int main() {
    //random array
    class generate_random r;
    vector<int>t=r.int_random(-1000,1000,92000);
    vector<vector<int>>A=r.int_matrix_random(-100,100,2,3);
    vector<vector<int>>B=r.int_matrix_random(-100,100,3,2);
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
