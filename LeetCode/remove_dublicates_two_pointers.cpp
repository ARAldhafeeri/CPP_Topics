// Giving a vector that contain zeros, move zeros to the end of the vector
// Use two pointer technique , write a method for this

class Solution {
    public: void moveZeros(vector<int>& nums){
        int writePointer = 0; 
        for(int readPointer = 0; readPointer < nums.sise(); ++nums){
            if ( nums[readPointer] != 0 ) {
                swap(nums[readPointer], nums[writePointer]);
            }
            if (nums[writePointer] != 0){
                ++writePointer
            }
        }
    }
}
