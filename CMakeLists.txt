cmake_minimum_required(VERSION 3.20)
project(DataStructuresAlgorithms_C__)

set(CMAKE_CXX_STANDARD 14)

add_executable(DataStructuresAlgorithms_C__ src/datastructures/Array.cpp)
add_executable(LinkedList src/datastructures/LinkedList.cpp)
add_executable(Stack src/datastructures/Stack.cpp)
add_executable(Queue src/datastructures/Queue.cpp)
add_executable(BinarySearchTree src/datastructures/BinarySearchTree.cpp)
add_executable(LinearSearch src/algorithms/searching-algorithms/LinearSearch.cpp)
add_executable(BinarySearch src/algorithms/searching-algorithms/BinarySearch.cpp)
add_executable(BubbleSort src/algorithms/sorting-algorithms/BubbleSort.cpp)
