#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        int result = 0;
        int len = nums.size();

        for (int i = 0; i < len; i += 2)
        {
            result += nums[i];
        }
        return result;
    }
};