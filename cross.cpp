/*
    Author: Halil Akca
    Course: CSCI-135
    Instructor: Mike Zamansky
    Assignment: Lab 04, Task C
    This program will take in input size and return a cross of that size.
*/

#include <iostream>
#include <string>

std::string cross(int size)
{
    std::string s = "";
    
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(j == i)
            {
                s += "*";
            }
            else if(j == size-1-i)
            {
                s += "*";
            }
            else
            {
                s += " ";
            }
        }
        s += "\n";
    }
    return s;
}