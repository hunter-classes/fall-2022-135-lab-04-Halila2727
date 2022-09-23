/*
    Author: Halil Akca
    Course: CSCI-135
    Instructor: Mike Zamansky
    Assignment: Lab 04, Task F
    This program will take in inputs length and width and return an upside-down trapezoid if possible.
*/

#include <iostream>
#include <string>

std::string trapezoid(int width, int height)
{
    std::string s = "";
    int spaces1 = 0;
    int spaces1_temp = 0;
    int spaces2 = 0;
    int spaces2_temp = 0;
    int stars = width;
    int stars_temp = width;

    if(2*height > width)
    {
        return "Impossible shape!";
    }

    for(int i=0; i<height; i++)
    {
        for(int j=0; j<width; j++)
        {
            if(spaces1_temp > 0)
            {
                s+= " ";
                spaces1_temp--;
            }
            else if(stars_temp > 0)
            {
                s += "*";
                stars_temp--;
            }
            else if(spaces2_temp > 0)
            {
                s += " ";
                spaces2_temp--;
            }
        }
        s += "\n";
        spaces1 += 1;
        spaces2 += 1;
        stars -= 2;

        spaces1_temp = spaces1;
        spaces2_temp = spaces2;
        stars_temp = stars;
    }
    
    return s;
}