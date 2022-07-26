#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int key = ruleKey == "type" ? 0: ruleKey == "color" ? 1 : 2;
        int totalCount = 0;

        for (int i = 0; i < items.size(); i++)
        {
            if(items[i][key]==ruleValue) ++totalCount;
        }
        
        return totalCount;
    }

};