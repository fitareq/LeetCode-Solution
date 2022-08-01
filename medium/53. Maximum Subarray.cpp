#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int cMax = 0, result = INT_MIN;
        
        for(auto c: nums){
            cMax = max(c, cMax+c);
            result = max(cMax, result);
        }
        
        return result;
        
    }
};