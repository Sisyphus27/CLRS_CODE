//
// Created by zy on 2021/8/30.
//

#include "my_time_cost.h"

void my_time::get_time_cost() {
    cout<<endl;
    end=clock();
    ret=double (end-begin)/CLOCKS_PER_SEC;
    cout<<"runtime: "<<ret<<endl;
}
