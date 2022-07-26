#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        vector<int> cMax, rMax;
        int n = grid.size();
        int result = 0;
        for(int i = 0; i<n; i++)
            for(int j=0; j<n; j++)
            {
                cMax.push_back(max(cMax[j], grid[i][j]));
                rMax.push_back(max(rMax[i], grid[i][j]));
            }


        for(int i = 0; i<n; i++)
            for(int j=0; j<n; j++)
            {
                result += min(cMax[j], rMax[i]) - grid[i][j];
            }

        return result;
    }
};