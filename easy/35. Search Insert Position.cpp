#include<bits/stdc++.h>
using namespace std;

class Solution{
public: 
int searchInsert(vector<int>& nums, int target) {
        int low = 0, high = nums.size()-1, mid;
        while (low <= high)
        {
            mid = low + (high - low)/2;
            if(nums[mid] == target) return mid;
            else if(target > nums[mid]) low = mid+1;
            else high = mid - 1;
        }
        return low;
    }
};