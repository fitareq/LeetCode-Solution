#include<bits/stdc++.h>
using namespace std;

class Solution {
    
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> res;
        int max = *max_element(candies.begin(), candies.end());
       
        for (auto i: candies)
        {
            res.push_back(i + extraCandies >= max);
        }

        return res;
        
    }
};