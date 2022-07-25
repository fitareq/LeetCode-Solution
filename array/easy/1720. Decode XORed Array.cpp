#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> result = {first};
        for (int i = 0; i < encoded.size(); i++)
        {
            result.push_back(first = first ^ encoded[i]);
        }
        return result;
    }
};