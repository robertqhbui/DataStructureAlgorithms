#include <gtest/gtest.h>
#include "../SecondLargest/Solution.h"
#include <vector>

using namespace std;

TEST(Solution, SolutionUnitTest1)
{

	Solution solution;
	vector<int>   arr = {12, 35, 1, 10, 34, 1};
	
	EXPECT_TRUE(solution.getSecondLargest(arr) == 34);
}

TEST(Solution, SolutionUnitTest2)
{

	Solution solution;
	vector<int>   arr = { 10, 5, 10 };

	EXPECT_TRUE(solution.getSecondLargest(arr) == 5);
}

TEST(Solution, SolutionUnitTest3)
{

	Solution solution;
	vector<int>   arr = { 10, 10, 10 };

	EXPECT_TRUE(solution.getSecondLargest(arr) == -1);
}

TEST(Solution, SolutionUnitTest4)
{

	Solution solution;
	vector<int>   arr = { 12, 35, 1, 10, 34, 1 };

	EXPECT_TRUE(solution.getSecondLargest(arr) == 34);
}