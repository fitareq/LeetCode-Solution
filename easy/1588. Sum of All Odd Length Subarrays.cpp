#include<bits/stdc++.h>
using namespace std;  


class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size(), sum = 0, c;

        for (int i = 0; i < n; i++)
        {
            c = ceil(((i+1)*(n-i))/2.0);

            sum += c*arr[i];
        }
        return sum;
    }
};