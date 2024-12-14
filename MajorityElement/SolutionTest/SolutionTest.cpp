#include <gtest/gtest.h>
#include "../MajorityElement/Solution.h"
#include <vector>

using namespace std;

TEST(Solution, SolutionUnitTest1)
{

	Solution solution;
	vector<int>   arr = { 3, 1, 3, 3, 2 };
	
	EXPECT_TRUE(solution.majorityElement(arr) == 3);
}


TEST(Solution, SolutionUnitTest2)
{

	Solution solution;
	vector<int>   arr = { 7 };

	EXPECT_TRUE(solution.majorityElement(arr) == 7);
}

TEST(Solution, SolutionUnitTest3)
{

	Solution solution;
	vector<int>   arr = { 2, 13};

	EXPECT_TRUE(solution.majorityElement(arr) == -1);
}