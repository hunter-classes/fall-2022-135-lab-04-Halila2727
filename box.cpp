/*
    Author: Halil Akca
    Course: CSCI-135
    Instructor: Mike Zamansky
    Assignment: Lab 04, Task A
    This program will take in inputs height and width and return a box of that size.
*/

#include <iostream>

void box(int width, int height)
{
    std::cout << "\n";
    for(int i=0; i<height; i++)
    {
        for(int j=0; j<width; j++)
        {
            std::cout << "*";
        }
        std::cout << "\n";
    }
    std::cout << "\n";
}