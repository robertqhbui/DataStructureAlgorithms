#pragma once
#include <vector>
#include <map>
#include <cmath>
#include <string>
#include <iostream>

using namespace std;


class Solution
{
public:
    //Brute force using hashed map
    int majorityElementUsingMap(vector<int>& arr)
    {
        int result = -1;
        map<int, int> counts;
        int limit = std::floor(arr.size() / 2);

        for (auto value : arr)
        {
            counts[value]++;
        }
        for (auto value : counts)
        {
            if (value.second > limit)
                result = value.first;
        }
        std::cout << "Result = " + std::to_string(result) + "  with limit " + std::to_string(limit) + "." << std::endl;
        return result;
    }


    int findCandidate(vector<int>& arr)
    {
        //Using Moore Voting Algorithm
        int candidateIndex = 0;
        int candidateCount = 1;
        for (int index = 1; index < arr.size(); index++)
        {
            if (arr[index] == arr[candidateIndex])
                candidateCount++;
            else
                candidateCount--;
            if (candidateCount == 0)
            {
                candidateCount = 1;
                candidateIndex = index;
            }
        }
        return(arr[candidateIndex]);
    }

    bool isCandidateMajority(vector<int>& arr, int candidate)
    {
        int midPoint = arr.size() / 2;
        int count = 0;
        for (auto value : arr)
        {
            if (value == candidate)
                count++;
        }
        if (count > midPoint)
            return true;
        return false;
    }
    int majorityElement(vector<int>& arr)
    {
        int candidate = findCandidate(arr);
        if (isCandidateMajority(arr, candidate))
            return candidate;
        return -1;
    }
};

