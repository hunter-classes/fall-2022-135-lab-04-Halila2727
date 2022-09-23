/*
    Author: Halil Akca
    Course: CSCI-135
    Instructor: Mike Zamansky
    Assignment: Lab 04, Task G
    This program will take in inputs length and width and return a 3 by 3 checkerboard-style output.
*/

#include <iostream>
#include <string>

std::string checkerboard3x3(int width, int height)
{
    std::string s = "";

    std::string beginning_char = "*";
    std::string current_char = "";

    for(int i = 1; i <= height; i++)
    {
        current_char = beginning_char;
        
        for(int j = 1; j <= width; j++)
        {
            s += current_char;

            if(j%3 == 0 && current_char == "*")
            {
                current_char = " ";
            }
            else if(j%3 == 0 && current_char == " ")
            {
                current_char = "*";
            }
        }
        s += "\n";
        
        if(i % 3 == 0)
        {
            if(beginning_char == "*")
            {
                beginning_char = " ";
            }
            else
            {
                beginning_char = "*";
            }
        }
    }
    return s;
}