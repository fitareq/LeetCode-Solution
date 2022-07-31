#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkRecord(string s) {
        int len = s.length();
        int absent = 0, late = 0;
        
        for(int i=0; i<len; i++){
            if(s[i] == 'A') ++absent;
            
            if(s[i] == 'L') ++late;
            else late = 0;
            
            if(absent >= 2 || late >= 3) return false;
        }
        
        return true;
    }
};