#pragma once
#include <vector>
#include <string>
#include <iostream>

class Solution
{
public:
    int getSecondLargest(std::vector<int>& arr) {
        int largestValue = -1;
        int secondLargestValue = -1;

        std::cout << "getSecondLargest()" << std::endl;
        for (auto value : arr)
        {
            if (largestValue == value)
                continue;
            if (largestValue < value)
            {
                secondLargestValue = largestValue;
                largestValue = value;
            }
            else
            {
                if (secondLargestValue < value)
                {
                    secondLargestValue = value;
                }
            }
            std::cout << std::to_string(value) + " " + std::to_string(secondLargestValue) << std::endl;
        }
        return secondLargestValue;
    }
};

