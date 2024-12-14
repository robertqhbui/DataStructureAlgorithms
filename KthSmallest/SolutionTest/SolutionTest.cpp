#include <gtest/gtest.h>
#include "../KthSmallest/Solution.h"
#include <vector>

using namespace std;



TEST(Solution, SolutionUnitTest1)
{

	Solution solution;
	vector<int>   arr = { 7, 10, 4, 3, 20, 15 };
	EXPECT_TRUE(solution.kthSmallest(arr, 3) == 7);
}


TEST(Solution, SolutionUnitTest2)
{

	Solution solution;
	vector<int>   arr = { 2, 3, 1, 20, 15 };
	EXPECT_TRUE(solution.kthSmallest(arr, 4) == 15);
}