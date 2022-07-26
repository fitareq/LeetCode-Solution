#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        int count = 0;
        for(int i = 0; i<nums.size(); ++i)
        {
            for(int j = 0; j<nums.size(); ++j)
            {
                if(i!=j)
                {
                    if(nums[i]+nums[j] == target)
                    {
                    result.push_back(i);
                    result.push_back(j);
                    ++count;
                    break;
                    }
                }
            }
            if(count>0)
                break;
                    
        }
        return result;
    }
};