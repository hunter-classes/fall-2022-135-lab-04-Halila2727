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
#include "checkerboard.h"
#include "cross.h"

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

    std::cout << "\nTesting checkerboard() function:\n\nWidth: 8\nHeight: 4\n";
    result = checkerboard(8, 4);
    std::cout << result << "\n";
    std::cout << "\n------------------\n";
    std::cout << "\nWidth: 14\nHeight: 0\n";
    result = checkerboard(14, 0);
    std::cout << result << "\n";
    std::cout << "\n------------------\n";
    std::cout << "\nWidth: 1\nHeight: 12\n";
    result = checkerboard(1, 12);
    std::cout << result << "\n";
    std::cout << "\nWidth: 11\nHeight: 6\n";
    result = checkerboard(11, 6);
    std::cout << result << "\n";

    std::cout << "\nEnd of Task B\n------------------\n\n";

    std::cout << "\nTesting cross() function:\n\nSize: 8\n";
    result = cross(8);
    std::cout << result << "\n";
    std::cout << "\n------------------\n";
    std::cout << "\nSize: 0\n";
    result = cross(0);
    std::cout << result << "\n";
    std::cout << "\n------------------\n";
    std::cout << "\nSize: 13\n";
    result = cross(13);
    std::cout << result << "\n";

    std::cout << "\nEnd of Task C\n------------------\n\n";

    
    return 0;
}