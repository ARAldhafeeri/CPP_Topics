class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int counter = 0;
        for(const char i : J){
            for( const char j : S){
            if( i == j){
                ++counter;
            }
            }
        }
        return counter;
    }
};