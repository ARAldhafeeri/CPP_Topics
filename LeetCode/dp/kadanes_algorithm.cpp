// Given an integer array nums, find the contiguous
//  subarray(containing at least one number)
//  which has the largest sum and return its sum.

// Example 1 :

// Input : nums = [ -2, 1, -3, 4, -1, 2, 1, -5, 4 ] Output : 6
// Explanation : [ 4, -1, 2, 1 ] has the largest sum = 6.

// submission
// Runtime: 8 ms, faster than 53.55% of C++ online submissions for Maximum Subarray.
// Memory Usage: 13.6 MB, less than 5.63% of C++ online submissions for Maximum Subarray.
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        vector<int> dp;                       // create a vector
        dp.push_back(nums[0]);                // push back first element of nums
        for (int i = 1; i < nums.size(); ++i) // iterate through nums
        {
            if (dp[i - 1] < 0) // previous sum is not max cause < 0, push nums[i]
                dp.push_back(nums[i]);
            else // keep adding previous sums
                dp.push_back(dp[i - 1] + nums[i]);
        }
        return *max_element(dp.begin(), dp.end()); //return the max sum [nums[0], nums[0] + nums[i -1], ....]
    };
};

// algorithm concept
// Explanation:
// The simple idea of Kadane’s algorithm is to look for all positive
// contiguous segments of the array (max_ending_here is used for this).
// And keep track of maximum sum contiguous segment among all positive
// segments (max_so_far is used for this). Each time we get a positive-sum
// compare it with max_so_far and update max_so_far if it is greater than
// max_so_far

// this dp algorithm is build on top of kadane's algrothim.
