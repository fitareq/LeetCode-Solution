#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        vector<int>::iterator it;
        for (auto i: target)
        {
            it = find(arr.begin(), arr.end(), i);
           if( it == arr.end() ) return false;
           arr.erase(it);
        }
        return true;
    }

     bool canBeEqual(vector<int>& target, vector<int>& arr) {
         int n = target.size();
        sort(target.begin(), target.end());
        sort(arr.begin(), arr.end());
        for (int i = 0; i < n; i++)
        {
            if(target[i] != arr[i]) return false;
        }
        return true;
    }
};