#include <stdio.h>
#include <algrothim>
#include <vector>
using namespace std;
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int max = *max_element(candies.begin(), candies.end());
        for (int i=0; i < candies.size(); i++){
            int temp = candies[i] + extraCandies;
            if(temp == max || temp > max) {
                ans.push_back(true);
            }
            else {
                ans.push_back(false);
            }
        }
        return ans;
    }
};

