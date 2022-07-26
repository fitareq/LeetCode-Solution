#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(int n) {
        int result = 0;
        for(int i = n-1; i>0; i-=2)
            result += i;
        
        return result;
    }
};