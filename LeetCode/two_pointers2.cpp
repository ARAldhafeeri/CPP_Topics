
class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        if (nums1.size() == 1 && nums2.size() == 1)
        {
            if (nums1[0] != nums2[0])
            {
                return {};
            }
            else
            {
                return nums1;
            }
        }
        vector<int> temp;
        vector<int> ans;
        if (nums2.size() > nums1.size())
        {
            temp = nums1;
            nums1 = nums2;
            nums2 = temp;
        }
        int p1 = 0;
        int p2 = nums1.size() - 1;
        int mid = (p1 + p2) / 2;
        // iterate through the smaller vector
        for (int i = 0; i < nums2.size(); ++i)
        {
            while (p1 < p2)
            {
                if ((nums2[i] == nums1[p1] || nums1[mid] == nums2[i] || nums1[p2] == nums2[i]))
                {
                    if (ans.empty())
                    {
                        ans.push_back(nums2[i]);
                    }
                    else if (find(ans.begin(), ans.end(), nums2[i]) != ans.end())
                    {
                        p1++;
                        p2--;
                        continue;
                    }
                    else
                    {
                        ans.push_back(nums2[i]);
                    }
                }
                p1++;
                p2--;
            }
            p1 = 0;
            p2 = nums1.size() - 1;
        }
        return ans;
    }
};