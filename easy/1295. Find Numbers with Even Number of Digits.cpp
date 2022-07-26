#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int res = 0;
        int n, temp;

        for (int i = 0; i < nums.size(); i++)
        {
            n = nums[i];
            temp = 0;
            while (n > 0)
            {
                n = n/10;
                ++temp;
            }
            if(temp % 2 == 0) ++res;
        }
        return res;
    }
};