/*
    Author: Halil Akca
    Course: CSCI-135
    Instructor: Mike Zamansky
    Assignment: Lab 04, Task E
    This program will take in input side length and return a top-right triangle of that square.
*/

#include <iostream>
#include <string>

std::string upper(int length)
{
    std::string s = "";
    int num_spaces = 0;

    for(int i=0; i<length; i++)
    {
        for(int k=0; k<i; k++)
        {
            s+= " ";
        }
        
        for(int j=length-1; j>=i; j--)
        {
            s += "*";
        }
        s += "\n";
    }
    return s;
}