#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string temp = s;
        for (int i = 0; i < indices.size(); i++)
        {
            s[i] = temp[indices[i]];
        }
        return s;
    }
};