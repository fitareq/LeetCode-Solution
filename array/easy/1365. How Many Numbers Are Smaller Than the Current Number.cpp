#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> res;
        int k = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums.size(); j++)
            {
                if(i!=j && nums[i]>nums[j]) ++k;
            }
            res.push_back(k);
            k = 0;
        }
        return res;
    }
};