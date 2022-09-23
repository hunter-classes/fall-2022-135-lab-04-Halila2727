/*
    Author: Halil Akca
    Course: CSCI-135
    Instructor: Mike Zamansky
    Assignment: Lab 04, Task D
    This program will take in input side length and return a bottom-left triangle of that square.
*/

#include <iostream>
#include <string>

std::string lower(int length)
{
    std::string s = "";
    
    for(int i=0; i<length; i++)
    {
        for(int j=0; j<=i; j++)
        {
            s += "*";
        }
        s += "\n";
    }
    return s;
}