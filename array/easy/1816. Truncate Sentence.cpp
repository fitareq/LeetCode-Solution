#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string truncateSentence(string s, int k) {
        string res, w;
        stringstream line(s);

        while (line>>w && k-->0)
        {
            res += w+" ";
        }
        res.pop_back();
        return res;
        
    }

    //alternate solution
    string truncateSentence(string s, int k) {
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i] == ' ' && --k == 0) return s.substr(0, i);
        }
        return s;
        
    }
};