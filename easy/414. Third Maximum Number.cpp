
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int thirdMax(vector<int>& nums) {
         set<int> s(nums.begin(), nums.end());
         vector<int> v(s.begin(), s.end());
         int n = v.size();
        
        return n >= 3 ? v[n-3]: v[n-1];
    }
};