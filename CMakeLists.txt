cmake_minimum_required(VERSION 3.19)


project(my_algorithms)


set(CMAKE_CXX_STANDARD 14)


add_executable(my_algorithms
        main.cpp
        02_Getting_Started/sort_algorithms.cpp 02_Getting_Started/sort_algorithms.h
        04_Divide_and_Conquer/divide-and-conquer.cpp 04_Divide_and_Conquer/divide-and-conquer.h
        random_algorithm/my_random.cpp random_algorithm/my_random.h
        time_cost_calculate/time_cost_calculate.cpp time_cost_calculate/time_cost_calculate.h
        "05_Probabilistic Analysis and Randomized Algorithms/hiring_problem.cpp" "05_Probabilistic Analysis and Randomized Algorithms/hiring_problem.h"
        )