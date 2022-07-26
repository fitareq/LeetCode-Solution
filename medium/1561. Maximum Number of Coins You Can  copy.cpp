#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int n = piles.size();
        sort(piles.begin(), piles.end());
        int i = n/3;
        int result = 0;
        for(; i>0;i--){
            n -= 2;
            result += piles[n];
            
        }
        return result;
    }
};