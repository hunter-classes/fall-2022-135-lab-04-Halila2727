/*
    Author: Halil Akca
    Course: CSCI-135
    Instructor: Mike Zamansky
    Assignment: Lab 04, Task A
    This program will take in inputs height and width and return a box of that size.
*/

#include <iostream>
#include <string>

std::string box(int width, int height)
{
    std::string s = "";
    
    for(int i=0; i<height; i++)
    {
        for(int j=0; j<width; j++)
        {
            s += "*";
        }
        s += "\n";
    }
    return s;
}