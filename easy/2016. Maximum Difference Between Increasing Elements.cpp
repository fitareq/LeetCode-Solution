#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
 int maximumDifference(vector<int>& nums) {

     int max = -1;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i+1; j < nums.size(); j++)
            {
                int temp = nums[j]-nums[i];
                if(temp > 0 && temp > max)
                max = temp;
            }
            
        }
        return max;
        
    }
};