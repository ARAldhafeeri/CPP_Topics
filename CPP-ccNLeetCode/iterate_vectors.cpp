 vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int counter = 0;
        vector<int> ans;
        for(int i = 0; i < nums.size(); ++i){
            for(int j = 0; j < nums.size(); ++j){
                if(nums[i] > nums[j]) {
                    counter +=1;
                }
            
        }
            ans.push_back(counter);
            counter = 0;
    }
        return ans;
}