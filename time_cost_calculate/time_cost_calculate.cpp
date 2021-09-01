//
// Created by zy on 2021/8/30.
//

#include "time_cost_calculate.h"

void _time_cost::get_time_cost() {
    //when this function has been called, it store time at the end.
    //And print the time cost between class were created and this function were called.(s)
    cout<<endl;
    end=clock();
    ret=double (end-begin)/CLOCKS_PER_SEC;
    cout<<"runtime: "<<ret<<endl;
}
