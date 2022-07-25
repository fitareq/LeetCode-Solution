#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
       sort(nums.begin(), nums.end());
        for(int i = 0; i < n; i++)
        {
            if(nums[i] != i) return i;
        }
        return n;
    }
};

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int i;
        for( i = 0; i <= n; i++)
        {
            if(find(nums.begin(), nums.end(), i) == nums.end())              {
                break;
            }
            
        }
        return i;
    }
};