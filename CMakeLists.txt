cmake_minimum_required(VERSION 3.19)


project(my_algorithms)


set(CMAKE_CXX_STANDARD 14)


add_executable(my_algorithms
        main.cpp
        02_Getting_Started/_sort.cpp 02_Getting_Started/_sort.h
        04_Divide_and_Conquer/divide-and-conquer.cpp 04_Divide_and_Conquer/divide-and-conquer.h
        random_algorithm/my_random.cpp random_algorithm/my_random.h
        time_cost_calculate/time_cost_calculate.cpp time_cost_calculate/time_cost_calculate.h
        05_Probabilistic_Analysis_and_Randomized_Algorithms/hiring_problem.cpp 05_Probabilistic_Analysis_and_Randomized_Algorithms/hiring_problem.h
        06_Heapsort/_heaps.cpp 06_Heapsort/_heaps.h
        06_Heapsort/_priority_queue.cpp 06_Heapsort/_priority_queue.h
        07_Quicksort/_quicksort.cpp 07_Quicksort/_quicksort.h
        08_Sorting_in_Linear_Time/_counting_sort.cpp 08_Sorting_in_Linear_Time/_counting_sort.h
        08_Sorting_in_Linear_Time/_Radix_sort.cpp 08_Sorting_in_Linear_Time/_Radix_sort.h
        08_Sorting_in_Linear_Time/_Bucket_sort.cpp 08_Sorting_in_Linear_Time/_Bucket_sort.h
        09_Medians_and_Order_Statistics/_Minimum_and_maximum.cpp 09_Medians_and_Order_Statistics/_Minimum_and_maximum.h
        10_Elementary_Data_Structures/_Stack_and_Queues.cpp 10_Elementary_Data_Structures/_Stack_and_Queues.h)