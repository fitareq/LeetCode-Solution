#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> result = nums;
        result.insert(result.begin(), nums.begin(), nums.end());
        return result;
    }
};