#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size()-1, temp;

        while (nums[n] % nums[0] > 0){
            temp = nums[n] % nums[0];
            cout<<temp<<endl;
            nums[n] = nums[0];
            nums[0] = temp;

        }
        return nums[0];
    }
};
