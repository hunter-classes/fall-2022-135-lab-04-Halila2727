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
    std::string current_char = " ";

    int three_lines = 3;
    
    for(int i=1; i<=height; i++)
    {
        
        for(int j=0; j < width; j++)
        {
            if(j%3 == 0 && current_char == "*")
            {
                current_char = " ";
            }
            else if(j%3 == 0 && current_char == " ")
            {
                current_char = "*";
            }
            s += current_char;
        }

        s += "\n";
        if(i % 3 == 0)
        {
            if(current_char == "*")
            {
                current_char = " ";
            }
            else
            {
                current_char = "*";
            }
        }
    }
    
    return s;
}
