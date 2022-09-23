/*
    Author: Halil Akca
    Course: CSCI-135
    Instructor: Mike Zamansky
    Assignment: Lab 04, Task B
    This program will take in inputs height and width and return a checkerboard of that size.
*/

#include <iostream>
#include <string>

std::string checkerboard(int width, int height)
{
    std::string s = "";
    
    for(int i=0; i<height; i++)
    {
        if(i%2 == 0)
        {
            for(int j=0; j < (width+1)/2; j++)
            {
                s += "* ";
            }
        }
        else
        {
            s+= " ";
            for(int j=0; j<width/2; j++)
            {
                s += "* ";
            }
        }

        s += "\n";
    }
    return s;
}