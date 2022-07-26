#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int map[26] = {0}, res = 0;
        bool isConsistent;

        for (auto i: allowed)
        {
            ++map[i-'a'];
        }

        for (auto w: words)
        {
            isConsistent = true;
            for (auto ch: w)
            {
                if(map[ch - 'a'] == 0) {
                    isConsistent = false;
                    break;
                }
            }
            if(isConsistent) ++res;
            
        }
        
        return res;
    }
};