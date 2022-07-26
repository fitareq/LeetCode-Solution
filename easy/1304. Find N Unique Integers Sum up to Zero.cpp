#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> result;
        if(n % 2 != 0) result.push_back(0);
        for (int i = 0; i < n/2; i++)
        {
            result.push_back(i+1);
            result.insert(result.begin(), (i+1)*-1);
        }
        
        return result;
    }
};