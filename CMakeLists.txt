cmake_minimum_required(VERSION 3.19)


project(my_algorithms)


set(CMAKE_CXX_STANDARD 14)


add_executable(my_algorithms
        main.cpp
        sort_algorithms.cpp sort_algorithms.h
        divide-and-conquer.cpp divide-and-conquer.h
        random_algorithm/my_random.cpp random_algorithm/my_random.h
        my_time_cost.cpp my_time_cost.h
        "05_Probabilistic Analysis and Randomized Algorithms/hiring_problem.cpp" "05_Probabilistic Analysis and Randomized Algorithms/hiring_problem.h"
        )