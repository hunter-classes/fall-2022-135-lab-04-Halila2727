/*
    Author: Halil Akca
    Course: CSCI-135
    Instructor: Mike Zamansky
    Assignment: Lab 04, All Tasks
    This program will call the functions made in other .cpp files
*/

#include <iostream>
#include <string>
#include "box.h"

int main()
{
    std::cout << "\nTesting box() function:\n\nWidth: 8\nHeight: 4\n";
    std::string result = box(8, 4);
    std::cout << result << "\n";
    std::cout << "\n------------------\n";
    std::cout << "\nWidth: 14\nHeight: 0\n";
    result = box(14, 0);
    std::cout << result << "\n";
    std::cout << "\n------------------\n";
    std::cout << "\nWidth: 1\nHeight: 12\n";
    result = box(1, 12);
    std::cout << result << "\n";
    
    std::cout << "\nEnd of Task A\n------------------\n\n";



    return 0;
}