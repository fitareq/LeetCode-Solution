#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> res;
        for (auto n : nums)
        {
            if(n%2 == 0) res.insert(res.begin(), n);
            else res.push_back(n);
        }
        return res;
    }
};