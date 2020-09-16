// givin an array of odd and even numbers sort them in such way
// that the odd numbers in the array are after the even numbers 

class Solution {
    public vector<int> sortArrayByParity(vector<int>& A) {
        int writePointer = 0;
        for(int readPointer = 0; readPointer < A.size(); ++readPointer) {
            if ( A[readPointer] % 2 == 0) {
                swap(A[readPointer], A[writePointer]);
            }
            if (A[writePointer] % 2 == 0) {
                ++writePointer;
            }
        }
        return A;
    }
}