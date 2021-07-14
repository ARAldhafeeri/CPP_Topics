// 121. Best Time to Buy and Sell Stock
//     You are given an array prices where prices[i] is the price of a given stock on the ith day.

// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

// Return the maximum profit you can achieve from this transaction.If you cannot achieve any profit,
// return 0.

//     Example 1 :

// Input : prices = [ 7, 1, 5, 3, 6, 4 ] Output : 5 Explanation : Buy on day 2(price = 1) and sell on day 5(price = 6),
//     profit = 6 - 1 = 5. Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.Example 2 :

// Input : prices = [ 7, 6, 4, 3, 1 ] Output : 0 Explanation : In this case,
//     no transactions are done and the max profit = 0.

// Constraints :

// 1 <= prices.length <= 105
// 0 <= prices[i] <= 104
// Accepted 1,411, 976 Submissions 2, 702, 762

// my sol
// Runtime: 112 ms, faster than 77.06% of C++ online submissions for Best Time to Buy and Sell Stock.
// Memory Usage: 93.3 MB, less than 87.99% of C++ online submissions for Best Time to Buy and Sell Stock.

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int minprice = 99999;
        int max_profit = 0;
        for (auto i = 0; i < prices.size(); ++i)
        {
            if (prices[i] < minprice)
                minprice = prices[i];

            else if (prices[i] - minprice > max_profit)
                max_profit = prices[i] - minprice;
        }

        return max_profit;
    }
};