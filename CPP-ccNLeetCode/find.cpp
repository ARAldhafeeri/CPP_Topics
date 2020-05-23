
/*
Implement strStr().

Return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

Example 1:

Input: haystack = "hello", needle = "ll"
Output: 2
Example 2:

Input: haystack = "aaaaa", needle = "bba"
Output: -1
Clarification:

What should we return when needle is an empty string? This is a great question to ask during an interview.

For the purpose of this problem, we will return 0 when needle is an empty string. This is consistent to C's strstr() and Java's indexOf().



*/
#include <algorithm>
#include <iostream>
#include <string>
class Solution {
public:
    int strStr(std::string haystack, std::string needle) {
        if(needle.length() == 0) return 0;
        else if (haystack.find(needle) < 0) return -1 ;
        
        else return haystack.find(needle);
    
    }
};

int main() {
    Solution solution;
    std::string haystack;
    std::string needle;
    std::cin >> haystack >> needle;
    std::cout << solution.strStr(haystack,needle) << std::endl;
    return 0;
}