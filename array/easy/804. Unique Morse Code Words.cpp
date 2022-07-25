#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string code[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> tran;
        for (auto w: words)
        {
            string s;
            for (auto c: w)
            {
                s += code[c - 'a'];
            }
           tran.insert(s); 
        }
        return tran.size();
    }
};