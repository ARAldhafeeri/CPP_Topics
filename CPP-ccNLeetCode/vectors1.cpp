#include <algrothim>
#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
       int carry=1;
        for(int i=digits.size()-1;i>=0;i--){
                if((digits[i]+=carry)==10){
                    digits[i]=0;
                    carry=1;
                if(i==0){
                    digits.insert(digits.begin(),1);
                }
                }
                else return digits;
                }
                return digits;
    }
};

int main() {
    vector<int> &digits;
    digits.push_back(10);
    digits.push_back(30);
}