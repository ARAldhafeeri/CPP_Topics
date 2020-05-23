#include <iostream>
#include <string> 
#include <stdio.h>
#include <math.h>

class Solution {
public:
    int climbStairs(int n) 
    {
         return xn(n + 1);
    }
    int xn( int n) 
    {
          if ( n <= 1)  return n;
        
          return climbStairs(n-1) + climbStairs(n -2);
       
    }
};

int main() {
    Solution solution;
    int s = 5;
    
    
    printf("%d \n", solution.climbStairs(s));
}