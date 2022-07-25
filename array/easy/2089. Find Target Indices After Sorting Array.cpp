#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> res;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == target) res.push_back(i);
        }
        return res;
    }

    //alternate solution

    vector<int> targetIndices(vector<int>& nums, int target) {
        int count = 0, smallerCount = 0;
        vector<int> res;

       for (int n: nums)
       {
           if(n == target) ++count;
           else if(n < target) ++smallerCount;
       }
       while (count--)
       {
           res.push_back(smallerCount++);
       }
       
       
        return res;
    }
};