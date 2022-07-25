#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        bool f = true;
        while (f)
        {
            f = false;
           for (int i = 0; i < nums.size(); i++)
           {
               if(nums[i] == original) {
                   original *= 2;
                   f = true;
                   break;
               }
           }
           
        }
        return original;
    }
};

class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_set<int>s (nums.begin(), nums.end());
        while (s.count(original))
        {
            original *= 2;
        }
        return original;
    }
};

class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        while (find(nums.begin(), nums.end(), original) != nums.end())
        {
            original *= 2;
        }
        return original;
    }
};
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        set<int>s (nums.begin(), nums.end());
        while (s.find(original) != s.end())
        {
            original *= 2;
        }
        return original;
    }
};