#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        vector<int> minLen;
        int c = 0;

        for (int i = 0; i < rectangles.size(); i++)
        {
            minLen.push_back(*min_element(rectangles[i].begin(), rectangles[i].end()));
        }
        int max = *max_element(minLen.begin(), minLen.end());

        for (int i = 0; i < minLen.size(); i++)
        {
            if(minLen[i] >= max) ++c;
        }
        
        return c;
    }
};