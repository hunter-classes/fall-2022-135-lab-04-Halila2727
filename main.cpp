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
#include "lower.h"
#include "upper.h"
#include "trapezoid.h"
#include "checkerboard3x3.h"

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

    std::cout << "\nTesting lower() function:\n\nSide length: 6\n";
    result = lower(6);
    std::cout << result << "\n";
    std::cout << "\n------------------\n";
    std::cout << "\nSide length: 0\n";
    result = lower(0);
    std::cout << result << "\n";
    std::cout << "\n------------------\n";
    std::cout << "\nSide length: 13\n";
    result = lower(13);
    std::cout << result << "\n";

    std::cout << "\nEnd of Task D\n------------------\n\n";

    std::cout << "\nTesting upper() function:\n\nSide length: 5\n";
    result = upper(5);
    std::cout << result << "\n";
    std::cout << "\n------------------\n";
    std::cout << "\nSide length: 0\n";
    result = upper(0);
    std::cout << result << "\n";
    std::cout << "\n------------------\n";
    std::cout << "\nSide length: 9\n";
    result = upper(9);
    std::cout << result << "\n";

    std::cout << "\nEnd of Task E\n------------------\n\n";

    std::cout << "\nTesting trapezoid() function:\n\nWidth: 9\nHeight: 4\n";
    result = trapezoid(9, 4);
    std::cout << result << "\n";
    std::cout << "\n------------------\n";
    std::cout << "\nWidth: 14\nHeight: 0\n";
    result = trapezoid(14, 0);
    std::cout << result << "\n";
    std::cout << "\n------------------\n";
    std::cout << "\nWidth: 1\nHeight: 12\n";
    result = trapezoid(1, 12);
    std::cout << result << "\n";
    std::cout << "\n------------------\n";
    std::cout << "\nWidth: 12\nHeight: 5\n";
    result = trapezoid(12, 5);
    std::cout << result << "\n";
    std::cout << "\n------------------\n";
    std::cout << "\nWidth: 12\nHeight: 7\n";
    result = trapezoid(12, 7);
    std::cout << result << "\n";
    
    std::cout << "\nEnd of Task F\n------------------\n\n";

    std::cout << "\nTesting checkerboard3x3() function:\n\nWidth: 9\nHeight: 4\n";
    result = checkerboard3x3(9, 4);
    std::cout << result << "\n";
    std::cout << "\n------------------\n";
    std::cout << "\nWidth: 14\nHeight: 0\n";
    result = checkerboard3x3(14, 0);
    std::cout << result << "\n";
    std::cout << "\n------------------\n";
    std::cout << "\nWidth: 1\nHeight: 12\n";
    result = checkerboard3x3(1, 12);
    std::cout << result << "\n";
    std::cout << "\n------------------\n";
    std::cout << "\nWidth: 16\nHeight: 11\n";
    result = checkerboard3x3(16, 11);
    std::cout << result << "\n";
    std::cout << "\n------------------\n";
    std::cout << "\nWidth: 27\nHeight: 27\n";
    result = checkerboard3x3(27, 27);
    std::cout << result << "\n";
    
    std::cout << "\nEnd of Task G and LAB\n------------------\n\n";
    
    return 0;
}