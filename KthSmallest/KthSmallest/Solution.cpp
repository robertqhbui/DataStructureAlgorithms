#include "Solution.h"
#include <string>
#include <iostream>
#include <map>

void Solution::print(vector<int>& arr)
{
	std::cout << "Vector Elements:" << std::endl;
	for (auto value : arr)
	{
		std::cout << "[" + std::to_string(value) + "]";
	}
	std::cout << std::endl;
}
/*********************************************************************
* Sort array using Count Sort
*********************************************************************/
vector<int> Solution::sort(vector<int> &arr)
{
	//Step 0 -- Find the maximum
	int maxElement = -1;
	for (auto value : arr)
	{
		maxElement = (maxElement < value ? value : maxElement);
	}

	//Step 1 -- Count element
	vector<int>		counts(maxElement + 1, 0);
	for (auto value : arr)
	{
		counts[value]++;
	}

	//Step 2 -- Accumulate count to position
	int accumulatedStep = 0;
	for (int index = 0; index < counts.size(); index++)
	{
		accumulatedStep = accumulatedStep + counts[index];
		counts[index] = accumulatedStep;
	}

	//Step 3 -- Extract order list
	vector<int>		results(arr.size(), 0);
	for (auto value : arr)
	{
		int position = counts[value] - 1;
		results[position] = value;
		counts[value]--;
	}
	return results;
}